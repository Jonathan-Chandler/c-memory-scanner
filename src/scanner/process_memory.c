#include <errno.h>
#include <stdbool.h>
#include "debug.h"
#include "process_memory.h"

#define READ_PROCESS_MEMORY_SZ (1024*4)
#define MEMINFO_PROTECT_IS_WRITABLE (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
#define MEMINFO_PROTECT_IS_READABLE (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE)
#define MEMINFO_PROTECT_IS_EXECUTABLE (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
// PAGE_GUARD


int proc_mem_init(proc_mem_t **proc_mem, proc_info_t *proc_info)
{
  unsigned char *addr = 0;
  MEMORY_BASIC_INFORMATION mem_info;
  proc_mem_t dummy;
  proc_mem_t **current_mem = &dummy.next;
  proc_mem_t *temp_mem;
  dummy.next = 0;

  if (proc_mem == 0)
  {
    return -EINVAL;
  }

  while (true)
  {
    // read memory information for block starting at addr
    if (VirtualQueryEx(proc_info->process_handle, addr, &mem_info, sizeof(mem_info)) == 0)
    {
      debug_verbose("Ended scan at address: 0x%X", (uint32_t)addr);
      break;
    }

    // ignore uncommitted / non-writable / guarded pages
    if (!(mem_info.State & MEM_COMMIT)
      ||  !(mem_info.Protect & MEMINFO_PROTECT_IS_WRITABLE)
      ||  (mem_info.Protect & PAGE_GUARD))
    {
      //debug_verbose("Unreadable memory addr: 0x%X", (uint32_t) addr);

      // address of next page to copy
      addr += mem_info.RegionSize;

      continue;
    }

    temp_mem = malloc(sizeof(proc_mem_t));
    if (temp_mem == 0)
    {
      debug_error("Fail to allocate process memory to copy addr 0x%08X", (uint32_t)addr);
      return -ENOMEM;
    }
    memset(temp_mem, 0, sizeof(proc_mem_t));

    temp_mem->buffer = malloc(mem_info.RegionSize);
    if (temp_mem->buffer == 0)
    {
      debug_error("Unable to allocate buffer for page");
      return -ENOMEM;
    }

    // address of next page to copy
    addr += mem_info.RegionSize;

    // copy address/size
    temp_mem->addr = mem_info.BaseAddress;
    temp_mem->size = mem_info.RegionSize;

    // copy page memory to buffer
    if (proc_mem_refresh(temp_mem, proc_info) < 0)
    {
      debug_verbose("Skip addr 0x%08X", (uint32_t) addr);
      continue;
    }

    *current_mem = temp_mem;
    current_mem = &temp_mem->next;
  }

  // return list
  *proc_mem = dummy.next;
  return 0;
}

int proc_mem_destroy(proc_mem_t **proc_mem)
{
  return 0;
}

int proc_mem_refresh(proc_mem_t *proc_mem, proc_info_t *proc_info)
{
  MEMORY_BASIC_INFORMATION mem_info;
  uint32_t bytes_remaining;
  uint32_t reads_required;

  if (proc_mem == 0)
  {
      debug_error("Updating null block");
      return -EINVAL;
  }

  if (proc_mem->buffer == NULL)
  {
      debug_error("Updating block with null buffer");
      return -EINVAL;
  }

  if (VirtualQueryEx(proc_info->process_handle, proc_mem->addr, &mem_info, sizeof(mem_info)) == 0)
  {
    return -ENXIO;
  }

  // ignore uncommitted / non-writable / guarded pages
  if (!(mem_info.State & MEM_COMMIT)
    ||  !(mem_info.Protect & MEMINFO_PROTECT_IS_WRITABLE)
    ||  (mem_info.Protect & PAGE_GUARD))
  {
    //debug_verbose("Unreadable memory addr: 0x%X", (uint32_t) proc_mem->addr);
    return -ENXIO;
  }

  //debug_verbose("copy %u / %u", current_byte, proc_mem->size);
  reads_required = proc_mem->size / READ_PROCESS_MEMORY_SZ;
  for (uint32_t read_it = 0; read_it < reads_required; read_it++)
  {
    uint32_t current_byte = read_it * READ_PROCESS_MEMORY_SZ;
    //debug_verbose("copy %u / %u", current_byte, proc_mem->size);

    // ---virtualqueryex before update
    if (ReadProcessMemory(proc_info->process_handle, (proc_mem->addr + current_byte), &(proc_mem->buffer[current_byte]), READ_PROCESS_MEMORY_SZ, NULL) == 0)
    {
      MEMORY_BASIC_INFORMATION memInfo;

      debug_verbose("Fail copying byte %u at address 0x%08X", current_byte, (uint32_t)(proc_mem->addr + current_byte));
      debug_print_last_win_error();

      // query memory flags for this address
      if (VirtualQueryEx(proc_info->process_handle, proc_mem->addr, &memInfo, sizeof(memInfo)) == 0)
      {
        debug_verbose("Fail to get virtualQueryEx information: 0x%X", (uint32_t)(proc_mem->addr + current_byte));
      }
      else
      {
        debug_print_mem_basic_flags(&memInfo);
      }

      return -ENXIO;
    }
  }

  // copy remaining bytes
  if ((bytes_remaining = (proc_mem->size % READ_PROCESS_MEMORY_SZ)) > 0)
  {
    uint32_t current_byte = reads_required * READ_PROCESS_MEMORY_SZ;
    //debug_verbose("copy remaining %u bytes: %u / %u", bytes_remaining, current_byte, proc_mem->size);

    if (ReadProcessMemory(proc_info->process_handle, (proc_mem->addr + current_byte), &(proc_mem->buffer[current_byte]), bytes_remaining, NULL) == 0)
    {
      MEMORY_BASIC_INFORMATION memInfo;

      debug_verbose("fail copying byte %u at address 0x%X", current_byte, (uint32_t)(proc_mem->addr + current_byte));
      debug_print_last_win_error();

      // query memory flags for this address
      if (VirtualQueryEx(proc_info->process_handle, proc_mem->addr, &memInfo, sizeof(memInfo)) == 0)
      {
        debug_verbose("Fail to get virtualQueryEx information: 0x%X", (uint32_t)(proc_mem->addr + current_byte));
      }
      else
      {
        debug_print_mem_basic_flags(&memInfo);
      }

      return -ENXIO;
    }
  }

  debug_verbose("Copied %u bytes at address 0x%08X", proc_mem->size, (uint32_t)(proc_mem->addr));
  return 0;
}

int proc_mem_search(proc_mem_t *proc_mem, uint8_t value_size, uint8_t *value)
{
  proc_mem_t *current_mem = proc_mem;
  int buf_index;
  printf("search\n");

  while (current_mem != 0)
  {
    int end_index = current_mem->size - value_size;
    //match_list_t dummy;
    match_list_t **current_match = &current_mem->match_list;

    for (buf_index = 0; buf_index < end_index; buf_index++)
    {
      // add to list of matches for this proc_mem_t
      if (0 == memcmp(&current_mem->buffer[buf_index], value, value_size))
      {
        match_list_t *temp = malloc(sizeof(match_list_t));

        if (temp == 0)
        {
          debug_error("Unable to allocate memory for search match");
          return -ENOMEM;
        }
        memset(temp, 0, sizeof(match_list_t));

        temp->match_index = buf_index;
        temp->match_addr = (uint32_t) current_mem->addr + buf_index;
        *current_match = temp;
        current_match = &temp->next_match;
      }
    }

    current_mem = current_mem->next;
  }

  return 0;
}

int proc_mem_print(proc_mem_t *proc_mem)
{
  proc_mem_t *temp_mem = proc_mem;

  while (temp_mem != 0)
  {
    printf("proc_mem addr: 0x%08X\n", (uint32_t) temp_mem->addr);
    temp_mem = temp_mem->next;
  }

  return 0;
}

int proc_mem_print_matches(proc_mem_t *proc_mem)
{
  proc_mem_t *current_page = proc_mem;
  printf("print matches:\n");

  while (current_page != 0)
  {
    match_list_t *current_match = current_page->match_list;
    
    while (current_match != 0)
    {
      printf("Matching addr: 0x%08X\n", current_match->match_addr);
      current_match = current_match->next_match;
    }

    current_page = current_page->next;
  }

  return 0;
}
