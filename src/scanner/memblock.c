#include "memscan.h"
#include "memblock.h"
#include "debug.h"

// #define READ_PROCESS_MEMORY_SZ (1024*128)
#define READ_PROCESS_MEMORY_SZ (128*128)
// 997738607

// local function to filter current search results
int filter_block(mblock_t *current_block, uint8_t *value, int value_size);

mblock_t* create_memblock(HANDLE hProcess, MEMORY_BASIC_INFORMATION *meminfo)
{
  mblock_t *mb = malloc(sizeof(mblock_t));

  if (mb == NULL)
  {
    debug_error("Unable to allocate mblock_t");
    return NULL;
  }

  mb->hProcess = hProcess;
  mb->addr = meminfo->BaseAddress;
  mb->size = meminfo->RegionSize;
  mb->buffer = malloc(meminfo->RegionSize);
  mb->next = NULL;
  mb->search_res = NULL;

  if (mb->buffer == 0)
  {
    free(mb);
    debug_error("Unable to allocate block size %lu", meminfo->RegionSize);
    return NULL;
  }

  return mb;
}

void destroy_memblock(mblock_t **mb)
{
  if (mb == 0)
  {
    debug_error("mb is NULL");
    return;
  }

  if (*mb == 0)
  {
    debug_error("mb points to NULL address");
    return;
  }

  //debug_verbose("deallocate address 0x%08X", (uint32_t) ((*mb)->addr));

  if ((*mb)->buffer != 0)
    free((*mb)->buffer);

  free(*mb);

  *mb = NULL;
}

int update_block(mblock_t *mb)
{
  //char read_buffer[READ_PROCESS_MEMORY_SZ] = {0};
  //uint32_t bytes_read = 0;
  uint32_t bytes_remaining;
  uint32_t reads_required;

  if (mb == NULL)
  {
      debug_error("Updating null block");
      return -1;
  }

  if (mb->buffer == NULL)
  {
      debug_error("Updating block with null buffer");
      return -1;
  }
  // debug_verbose("copy at 0x%X: %X bytes", (uint32_t)mb->addr, mb->size);

  // debug_verbose("hprocess: 0x%X - buffer 0x%X - size: %d", (uint32_t) hProcess, (uint32_t) mb->buffer, (uint32_t) mb->size);
  // debug_verbose("read %d bytes at starting addr 0x%X to buffer", (uint32_t) mb->size, (uint32_t) mb->addr);

  //debug_verbose("copy %u / %u", current_byte, mb->size);
  reads_required = mb->size / READ_PROCESS_MEMORY_SZ;
  for (uint32_t read_it = 0; read_it < reads_required; read_it++)
  {
    uint32_t current_byte = read_it * READ_PROCESS_MEMORY_SZ;
    //debug_verbose("copy %u / %u", current_byte, mb->size);

// ---virtualqueryex before update
    if (ReadProcessMemory(mb->hProcess, (mb->addr + current_byte), &mb->buffer[current_byte], READ_PROCESS_MEMORY_SZ, NULL) == 0)
    {
      MEMORY_BASIC_INFORMATION memInfo;

      debug_verbose("fail copying byte %u at address 0x%X", current_byte, (uint32_t)(mb->addr + current_byte));
      debug_print_last_win_error();

      // query memory flags for this address
      if (VirtualQueryEx(mb->hProcess, (mb->addr + current_byte), &memInfo, sizeof(memInfo)) == 0)
      {
        debug_verbose("Fail to get virtualQueryEx information: 0x%X", (uint32_t)(mb->addr + current_byte));
      }
      else
      {
        debug_print_mem_basic_flags(&memInfo);
      }

      return -1;
    }
  }

  // copy remaining bytes
  if ((bytes_remaining = (mb->size % READ_PROCESS_MEMORY_SZ)) > 0)
  {
    uint32_t current_byte = reads_required * READ_PROCESS_MEMORY_SZ;
    //debug_verbose("copy remaining %u bytes: %u / %u", bytes_remaining, current_byte, mb->size);

    if (ReadProcessMemory(mb->hProcess, (mb->addr + current_byte), &mb->buffer[current_byte], bytes_remaining, NULL) == 0)
    {
      MEMORY_BASIC_INFORMATION memInfo;

      debug_verbose("fail copying byte %u at address 0x%X", current_byte, (uint32_t)(mb->addr + current_byte));
      debug_print_last_win_error();

      // query memory flags for this address
      if (VirtualQueryEx(mb->hProcess, (mb->addr + current_byte), &memInfo, sizeof(memInfo)) == 0)
      {
        debug_verbose("Fail to get virtualQueryEx information: 0x%X", (uint32_t)(mb->addr + current_byte));
      }
      else
      {
        debug_print_mem_basic_flags(&memInfo);
      }

      return -1;
    }
  }
  return 0;
}

// check all bytes in block
int search_block(mblock_t *current_block, uint8_t *value, int value_size)
{
  int final_byte;
  search_res_t *current_search;
  uint32_t match_count = 0;

  // don't search null block / null buffer
  if (current_block == NULL)
  {
    debug_verbose("searching null block");
    return -1;
  }

  if (current_block->buffer == NULL || current_block->size == 0)
  {
    debug_verbose("searching null block buffer");
    return -1;
  }

  if (value == NULL || value_size == 0)
  {
    debug_verbose("comparison value was null");
    return -1;
  }

  // filter results if not initial search
  if (current_block->search_res != 0)
  {
    return filter_block(current_block, value, value_size);
  }

  // 997770137
  final_byte = current_block->size - value_size;
  if (final_byte < 0)
  {
    debug_verbose("buffer too small for value_size");
    return 0;
  }

  for (int comparison_byte = 0; comparison_byte < final_byte; comparison_byte++)
  {
    if (0 == memcmp(&current_block->buffer[comparison_byte], value, value_size))
    {
      search_res_t *temp;
      match_count++;
      debug_verbose("Found value at 0x%08X", (uint32_t)(current_block->addr + comparison_byte));

      // add current byte to list of matching offsets
      if ((temp = malloc(sizeof(search_res_t))) == 0)
      {
        debug_error("Fail to allocate search result block");
        return -1;
      }

      // set as new list head or append
      if (current_block->search_res == NULL)
      {
        current_block->search_res = temp;
      }
      else
      {
        current_search->next_res = temp;
      }

      temp->match_offset = comparison_byte;
      temp->next_res = NULL;
      current_search = temp;
    }
  }

  // update search count
  current_block->match_count = match_count;

  return 0;
}

int filter_block(mblock_t *current_block, uint8_t *value, int value_size)
{
  uint32_t match_count = 0;
  search_res_t dummy;
  search_res_t *previous;
  search_res_t *current;

  // don't search null block / null buffer
  if (current_block == NULL)
  {
    debug_verbose("searching null block");
    return -1;
  }

  if (current_block->buffer == NULL || current_block->size == 0)
  {
    debug_verbose("searching null block buffer");
    return -1;
  }

  if (value == NULL || value_size == 0)
  {
    debug_verbose("comparison value was null");
    return -1;
  }

  dummy.next_res = current_block->search_res;
  previous = &dummy;
  current = current_block->search_res;
  while (current != NULL)
  {
    uint32_t comparison_byte = current->match_offset;

    if (0 == memcmp(&current_block->buffer[comparison_byte], value, value_size))
    {
      debug_verbose("Filtered value match at 0x%08X", (uint32_t)(current_block->addr + comparison_byte));
      match_count++;

      // iterate to next search
      previous = current;
      current = current->next_res;
    }
    else
    {
      // remove node from list
      previous->next_res = current->next_res;
      free(current);

      // iterate current only
      current = previous->next_res;
    }
  }

  // update search results list and count
  current_block->search_res = dummy.next_res;
  current_block->match_count = match_count;
  return 0;
}

int dump_block(mblock_t *mb)
{
  printf("Remote Addr: %p\n", mb->addr);

  for (int i = 0; i < mb->size; i++)
  {
      printf("%02x", mb->buffer[i]);
  }
  printf("\n");

  return 0;
}

int dump_block_addr(mblock_t *mb, int addr)
{
  if (addr < (int)(mb->addr))
  {
    //debug_verbose("address 0x%X less than 0x%X\n", addr, (uint32_t)(mb->addr));
    return 0;
  }

  if (addr > (int) (mb->addr + mb->size))
  {
    //debug_verbose("address 0x%X greater than 0x%X\n", addr, (uint32_t)(mb->addr + mb->size));
    return 0;
  }
  debug_verbose("matched address range 0x%X to 0x%X\n", (uint32_t)mb->addr, (uint32_t)(mb->addr + mb->size));

  return 0;
}

