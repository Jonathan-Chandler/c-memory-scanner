#include <windows.h>
#include "debug.h"
#include "memscan.h"
#include "memblock.h"

int main(int argc, char *argv[])
{
  procInfo_t procInfo;
  mblock_t* result;
  int rc;
  uint32_t value = 999993599;

  if (argc == 1)
  {
    printf("Expected process name: %s <process_name>", argv[0]);
  }

  initialize(&procInfo, argv[1]);
  result = create_block_list(&procInfo);
  rc = update_block_list(result);
  if (rc != 0)
    printf("rc: %d\n", rc);

  procInfo.head = result;
  search_block_list(result, (uint8_t*)&value, sizeof(value));
  //dump_block_list(result);
  dump_list_addr(result, 0xAF9FB4);

  destroy(&procInfo);

//  HWND hWindow = 0;
//  DWORD proc_id;
//  HANDLE hProcess;

//  getWindowHandle(&hWindow, "Twitch");
//  getProcessId(hWindow, &proc_id);
//  getProcessHandle(&hProcess, proc_id);
//  closeProcessHandle(&hProcess);

  return 0;
}

// VirtualQueryEx
// ReadProcessMemory
// WriteProcessMemory
