#include <windows.h>
#include "debug.h"
#include "memscan.h"
#include "memblock.h"

int main()
{
  procInfo_t procInfo;
  mblock_t* result;

  initialize(&procInfo, "Twitch");
  result = create_scan(&procInfo);
  procInfo.head = result;

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
