#include <errno.h>
#include <windows.h>
#include "process_info.h"
#include "memory_scan.h"
#include "debug.h"

int mem_scan_init(mem_scan_t **this_scan, const char *window_title)
{
  int retval;
  mem_scan_t *temp_scan = 0;

  if (this_scan == 0)
  {
    debug_error("Memory scan return pointer was null");
    return -EINVAL;
  }

  // return null pointer by default
  *this_scan = 0;

  if (window_title == 0)
  {
    debug_error("Memory scan window title was null");
    return -EINVAL;
  }

  if (strcmp(window_title, "") == 0)
  {
    debug_error("Empty memory scan window title string");
    return -EINVAL;
  }


  // allocate and zero mem_scan_t
  temp_scan = malloc(sizeof(temp_scan));
  if (temp_scan == 0)
  {
    debug_error("Unable to allocate memory");
    return -ENOMEM;
  }
  memset(temp_scan, 0, sizeof(mem_scan_t));

  if ((retval = proc_info_init(&temp_scan->proc_info, window_title)) < 0)
  {
    free(temp_scan);
    return retval;
  }

  // set return pointer to created scan
  *this_scan = temp_scan;
  return 0;
}

int mem_scan_destroy(mem_scan_t **this_scan)
{
  int retval;

  if (this_scan == NULL)
  {
    debug_error("Receive null scan pointer");
    return -EINVAL;
  }

  if (*this_scan == NULL)
  {
    debug_error("Receive pointer to null scan");
    return -EINVAL;
  }

  if ((*this_scan)->proc_info == NULL)
  {
    debug_error("Mem_scan contained null proc_info");
    return -EINVAL;
  }

  if ( (retval = proc_info_destroy(&(*this_scan)->proc_info)) != 0)
  {
    return retval;
  }

//  scan_res_t *scan_results;
//  if (*block == NULL)
//  {
//    debug_error("Null *ProcInfo");
//    return 0;
//  }
//
//  // delete all blocks in list
//  current_buffer = (*block)->head;
//
//  while (current_buffer != 0)
//  {
//    mblock_t *temp = current_buffer;
//    current_buffer = current_buffer->next;
//    memblock_destroy(&temp);
//  }

  *this_scan = 0;
  return 0;
}

#if 0
int mem_scan_create(procInfo_t *procInfo)
{
  mblock_t *mb_list = NULL;
  mblock_t *mb_current;
  MEMORY_BASIC_INFORMATION memInfo;
  unsigned char *addr = 0;

  if (procInfo->hProcess == 0)
  {
    debug_error("Bad process handle");
    return -1;
  }

  while (1)
  {
    // read memory information for block starting at addr
    if (VirtualQueryEx(procInfo->hProcess, addr, &memInfo, sizeof(memInfo)) == 0)
    {
      //debug_verbose("Ended scan at address: 0x%X", (uint32_t)addr);
      break;
    }

    //debug_verbose("Memory addr 0x%X", (uint32_t) memInfo.BaseAddress);
    //debug_print_mem_basic_flags(&memInfo);

    // ignore uncommitted / non-writable / guarded pages
    if (!(memInfo.State & MEM_COMMIT)
      ||  !(memInfo.Protect & MEMINFO_PROTECT_IS_WRITABLE)
      ||  (memInfo.Protect & PAGE_GUARD))
    {
      // set next address starting point at the end of memory that was just read
      addr = (uint8_t*) (memInfo.BaseAddress + memInfo.RegionSize);

      //debug_verbose("Skip to memory addr: 0x%X", (uint32_t) addr);
      //debug_verbose("Skip memory addr 0x%08X - size 0x%lX", (uint32_t) memInfo.BaseAddress, memInfo.RegionSize);
      continue;
    }

    //debug_print_mem_basic_flags(&memInfo);

    mblock_t *nextBlock = memblock_initialize(procInfo->hProcess, &memInfo);
    if (nextBlock == 0)
    {
      debug_verbose("Could not create memblock");
      return -1;
    }

    // update buffer for this block
    if (memblock_update(nextBlock) < 0)
    {
      // failed to ReadProcessMem for block
      debug_error("Fail to update block at addr: 0x%X", (uint32_t)nextBlock->addr);
      memblock_destroy(&nextBlock);
      return -1;
    }

    if (mb_list == 0)
    {
      // set new block as list head
      mb_list = nextBlock;
    }
    else
    {
      // set new block as next block in list
      mb_current->next = nextBlock;
    }

    // add null terminator to list
    mb_current = nextBlock;
    mb_current->next = NULL;

    //debug_verbose("read %d bytes at starting addr 0x%X to buffer", (uint32_t) memInfo.RegionSize, (uint32_t) memInfo.BaseAddress);

    // set next address starting point at the end of memory that was just read
    addr = (uint8_t*) (memInfo.BaseAddress + memInfo.RegionSize);
  }
  procInfo->head = mb_list;

  return 0;
}

int mem_scan_update(procInfo_t *current_scan)
{
  mblock_t *block_it = current_scan->head;

  while (block_it)
  {
    if (memblock_update(block_it))
    {
      debug_verbose("Failed to update block");
      return -1;
    }

    block_it = block_it->next;
  }

  return 0;
}

int mem_scan_search(procInfo_t *current_scan, uint8_t *value, int value_size)
{
  mblock_t dummy;
  mblock_t *current_block;
  mblock_t *prev_block;

  if (current_scan == NULL)
  {
      debug_error("Null procInfo");
      return -1;
  }

  if (value == NULL || value_size == 0)
  {
      debug_error("Null search value");
      return -1;
  }

  // easier to reference previous node
  dummy.next = current_scan->head;
  prev_block = &dummy;

  current_block = current_scan->head;
  while (current_block != NULL)
  {
    memblock_search(current_block, value, value_size);

    // current block did not contain value
    if (current_block->search_res == NULL)
    {
      // remove current_block from list
      prev_block->next = current_block->next;

      // delete current_block
      memblock_destroy(&current_block);

      // iterate current_block to current_block->next
      current_block = prev_block->next;
    }
    else
    {
      // block contained value, iterate both
      current_block = current_block->next;
      prev_block = prev_block->next;
    }
  }

  current_scan->head = dummy.next;
  return 0;
}

int mem_scan_search_new(procInfo_t *current_scan, uint8_t *value, int value_size)
{
  mblock_t dummy;
  mblock_t *current_block;
  mblock_t *prev_block;

  if (current_scan == NULL)
  {
      debug_error("Null procInfo");
      return -1;
  }

  if (value == NULL || value_size == 0)
  {
      debug_error("Null search value");
      return -1;
  }

  // easier to reference previous node
  dummy.next = current_scan->head;
  prev_block = &dummy;

  current_block = current_scan->head;
  while (current_block != NULL)
  {
    memblock_search(current_block, value, value_size);

    // current block did not contain value
    if (current_block->search_res == NULL)
    {
      // remove current_block from list
      prev_block->next = current_block->next;

      // delete current_block
      memblock_destroy(&current_block);

      // iterate current_block to current_block->next
      current_block = prev_block->next;
    }
    else
    {
      // block contained value, iterate both
      current_block = current_block->next;
      prev_block = prev_block->next;
    }
  }

  current_scan->head = dummy.next;
  return 0;
}
int mem_scan_dump_results(procInfo_t *current_scan)
{
  mblock_t *current_block;
  search_res_t *current_search;

  if (current_scan == NULL)
  {
      debug_error("Null scan");
      return -1;
  }

  if ((current_block = current_scan->head) == NULL)
  {
      debug_error("No matches");
      return 0;
  }

  if (current_block->search_res == NULL)
  {
      debug_error("No matches");
      return 0;
  }

  while (current_block)
  {
    current_search = current_block->search_res;
    while (current_search)
    {
      printf("Found value at 0x%08X\n",(uint32_t)(current_search->match_offset + current_block->addr));
      current_search = current_search->next_res;
    }

    current_block = current_block->next;
  }

  return 0;
}

int dump_block_list(mblock_t *mb_list)
{
  mblock_t *current_block = mb_list;

  while (current_block)
  {
    dump_block(current_block);

    current_block = current_block->next;
  }

  return 0;
}

int dump_list_addr(mblock_t *mb_list, int addr)
{
  mblock_t *current_block = mb_list;

  while (current_block)
  {
    dump_block_addr(current_block, addr);

    current_block = current_block->next;
  }

  return 0;
}
#endif

