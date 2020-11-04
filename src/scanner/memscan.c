#include <windows.h>
// #include <memoryapi.h> // virtualqueryex

#include "memscan.h"
#include "debug.h"

#define MEMINFO_PROTECT_IS_WRITABLE (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
#define MEMINFO_PROTECT_IS_READABLE (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE)
#define MEMINFO_PROTECT_IS_EXECUTABLE (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
// PAGE_GUARD

int getWindowHandle(procInfo_t *procInfo, const char *windowTitle)
{
  if (procInfo == NULL)
  {
    debug_error("Null process information");
    return -1;
  }

  procInfo->hWindow = FindWindow(0, windowTitle);

  if (procInfo->hWindow == 0)
  {
    debug_error("%s window not found", windowTitle);
    return -1;
  }
  else
  {
    debug_verbose("Found %s window", windowTitle);
  }

  return 0;
}

int getProcessId(procInfo_t *procInfo)
{
  if (procInfo->hWindow == 0)
  {
    debug_error("Null hWindow");
    return -1;
  }

  GetWindowThreadProcessId(procInfo->hWindow, &procInfo->proc_id);
  if (procInfo->proc_id == 0)
  {
    debug_error("Could not get process id");
    return -1;
  }
  else
  {
    debug_verbose("Found process id: %lu", procInfo->proc_id);
  }

  return 0;
}

int getProcessHandle(procInfo_t *procInfo)
{
  if (procInfo->proc_id == 0)
  {
    debug_error("Null process ID");
    return -1;
  }

  procInfo->hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procInfo->proc_id);

  if (procInfo->hProcess == 0)
  {
    debug_error("Failed to get handle for process");
    return -1;
  }
  else
  {
    debug_verbose("Open process handle: %u", (unsigned int) procInfo->hProcess);
  }

  return 0;
}

int closeProcessHandle(procInfo_t *procInfo)
{
  if (procInfo == 0)
  {
    debug_error("Null process info");
    return -1;
  }

  if (procInfo->hProcess == 0)
  {
    debug_error("Null process handle");
    return -1;
  }

  debug_verbose("Closed process handle: %u", (unsigned int) procInfo->hProcess);
  CloseHandle(procInfo->hProcess);
  procInfo->hProcess = 0;

  return 0;
}


int initialize(procInfo_t **block, const char *windowTitle)
{
  int retval;

  if (block == 0)
  {
    debug_error("Unable to allocate block for %s - memory block was NULL", windowTitle);
    return -1;
  }

  *block = malloc(sizeof(procInfo_t));
  if (*block == 0)
  {
    return -1;
  }

  memset(*block, 0, sizeof(procInfo_t));

  retval = getWindowHandle(*block, windowTitle);
  if (retval < 0)
    return retval;

  retval = getProcessId(*block);
  if (retval < 0)
    return retval;

  retval = getProcessHandle(*block);
  if (retval < 0)
    return retval;

  return 0;
}

int destroy(procInfo_t **block)
{
  int retval;
  mblock_t *current_buffer;

  if (block == NULL)
  {
    debug_error("Null ProcInfo");
    return 0;
  }

  if (*block == NULL)
  {
    debug_error("Null *ProcInfo");
    return 0;
  }

  // delete all blocks in list
  current_buffer = (*block)->head;

  while (current_buffer != 0)
  {
    mblock_t *temp = current_buffer;
    current_buffer = current_buffer->next;
    destroy_memblock(&temp);
  }

  retval = closeProcessHandle(*block);
  if (retval < 0)
    return retval;

  return 0;
}

int create_block_list(procInfo_t *procInfo)
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

    mblock_t *nextBlock = create_memblock(procInfo->hProcess, &memInfo);
    if (nextBlock == 0)
    {
      debug_verbose("Could not create memblock");
      return -1;
    }

    // update buffer for this block
    if (update_block(nextBlock) < 0)
    {
      // failed to ReadProcessMem for block
      debug_error("Fail to update block at addr: 0x%X", (uint32_t)nextBlock->addr);
      destroy_memblock(&nextBlock);
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

int update_block_list(procInfo_t *current_scan)
{
  mblock_t *block_it = current_scan->head;

  while (block_it)
  {
    if (update_block(block_it))
    {
      debug_verbose("Failed to update block");
      return -1;
    }

    block_it = block_it->next;
  }

  return 0;
}

int search_block_list(procInfo_t *current_scan, uint8_t *value, int value_size)
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
    search_block(current_block, value, value_size);

    // current block did not contain value
    if (current_block->search_res == NULL)
    {
      // remove current_block from list
      prev_block->next = current_block->next;

      // delete current_block
      destroy_memblock(&current_block);

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

int dump_scan_results(procInfo_t *current_scan)
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


// int getPages(procInfo_t *block, )
// {
// //   LPCVOID lpAddress;
// //   PMEMORY_BASIC_INFORMATION lpBuffer,
// 
//   VirtualQueryEx(block->hProcess, )
// //  LPCVOID                   lpAddress,
// //  PMEMORY_BASIC_INFORMATION lpBuffer,
// //  SIZE_T                    dwLength
// }

