#include <windows.h>
// #include <memoryapi.h> // virtualqueryex

#include "memscan.h"
#include "debug.h"

#define MEMINFO_PROTECT_IS_WRITABLE (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
#define MEMINFO_PROTECT_IS_READABLE (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE)
#define MEMINFO_PROTECT_IS_EXECUTABLE (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
// PAGE_GUARD

int getWindowHandle(HWND *hWindow, const char *windowTitle)
{
  if (hWindow == 0)
  {
    debug_error("Null window handle");
    return -1;
  }

  *hWindow = FindWindow(0, windowTitle);

  if (*hWindow == 0)
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

int getProcessId(HWND hWindow, DWORD *proc_id)
{
  if (hWindow == 0)
  {
    debug_error("Null hWindow");
    return -1;
  }

  GetWindowThreadProcessId(hWindow, proc_id);
  if (proc_id == 0)
  {
    debug_error("Could not get process id");
    return -1;
  }
  else
  {
    debug_verbose("Found process id: %lu", *proc_id);
  }

  return 0;
}

int getProcessHandle(HANDLE *hProcess, DWORD proc_id)
{
  if (proc_id == 0)
  {
    debug_error("Null process ID");
    return -1;
  }

  *hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, proc_id);

  if (hProcess == 0)
  {
    debug_error("Failed to get handle for process");
    return -1;
  }
  else
  {
    debug_verbose("Receive process handle: %u", (unsigned int) *hProcess);
  }

  return 0;
}

int closeProcessHandle(HANDLE *hProcess)
{
  if (*hProcess == 0)
  {
    debug_error("Null process handle");
    return -1;
  }

  debug_verbose("Closed process handle: %u", (unsigned int) hProcess);
  CloseHandle(*hProcess);
  *hProcess = 0;

  return 0;
}


int initialize(procInfo_t *block, const char *windowTitle)
{
  int retval;

  if (block == 0)
  {
    debug_error("Unable to allocate block for %s - memory block was NULL", windowTitle);
    return -1;
  }

  memset(block, 0, sizeof(procInfo_t));

  retval = getWindowHandle(&block->hWindow, windowTitle);
  if (retval < 0)
    return retval;

  retval = getProcessId(block->hWindow, &block->proc_id);
  if (retval < 0)
    return retval;

  retval = getProcessHandle(&block->hProcess, block->proc_id);
  if (retval < 0)
    return retval;

  return 0;
}

int destroy(procInfo_t *block)
{
  int retval;
  mblock_t *current_buffer;

  // delete all blocks in list
  current_buffer = block->head;
  while (current_buffer != 0)
  {
    mblock_t *temp = current_buffer;
    current_buffer = current_buffer->next;
    destroy_memblock(&temp);
  }

  retval = closeProcessHandle(&block->hProcess);
  if (retval < 0)
    return retval;

  return 0;
}

mblock_t* create_scan(procInfo_t *procInfo)
{
  mblock_t *mb_list = NULL;
  mblock_t *mb_current;
  MEMORY_BASIC_INFORMATION memInfo;
  unsigned char *addr = 0;

  if (procInfo->hProcess == 0)
  {
    debug_error("Bad process handle");
    return NULL;
  }

  while (1)
  {
    // read memory information for block starting at addr
    if (VirtualQueryEx(procInfo->hProcess, addr, &memInfo, sizeof(memInfo)) == 0)
    {
      debug_verbose("Ended scan at address: 0x%X", (uint32_t)addr);
      break;
    }

    //debug_print_mem_basic_flags(&memInfo);

    // ignore uncommitted / non-writable / guarded pages
    if (!(memInfo.State & MEM_COMMIT)
      ||  !(memInfo.Protect & MEMINFO_PROTECT_IS_WRITABLE)
      ||  (memInfo.Protect & PAGE_GUARD))
    {
      // set next address starting point at the end of memory that was just read
      addr = (uint8_t*) (memInfo.BaseAddress + memInfo.RegionSize);

      //debug_verbose("Skip to memory addr: 0x%X", (uint32_t) addr);
      continue;
    }

    //debug_print_mem_basic_flags(&memInfo);

    mblock_t *nextBlock = create_memblock(procInfo->hProcess, &memInfo);
    if (nextBlock == 0)
      return NULL;

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

    debug_verbose("read %d bytes at starting addr 0x%X to buffer", (uint32_t) memInfo.RegionSize, (uint32_t) memInfo.BaseAddress);

    // set next address starting point at the end of memory that was just read
    addr = (uint8_t*) (memInfo.BaseAddress + memInfo.RegionSize);
  }

  return mb_list;
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

// void Trainer::setValue(LPVOID address, LPVOID offset, short int value)
// {
//   if (hwnd == 0)
//     return;
// 
//   if (WriteProcessMemory(hProcess, (LPVOID)((unsigned int)address + (unsigned int)offset), &value, sizeof(value), NULL))
//   {
//     cout << "Value was written successfully." << endl;
//   }
//   else
//   {
//     cout << "Error: Could not modify value." << endl;
//   }
// }
// 
