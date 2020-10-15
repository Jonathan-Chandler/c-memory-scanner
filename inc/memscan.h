#ifndef __MEMSCAN_H__
#define __MEMSCAN_H__
#include <windows.h>
#include "memblock.h"

typedef struct 
{
//  LPCSTR gameTitle = "DarkStone DSI";
  HWND hWindow;
  HANDLE hProcess;
  DWORD proc_id;
  mblock_t *head;
} procInfo_t;

int getWindowHandle(HWND *hWindow, const char *windowTitle);
int getProcessId(HWND hWindow, DWORD *proc_id);
int getProcessHandle(HANDLE *hProcess, DWORD proc_id);
int closeProcessHandle(HANDLE *hProcess);

int initialize(procInfo_t *block, const char *windowTitle);
int destroy(procInfo_t *block);
mblock_t* create_scan(procInfo_t *procInfo);

#endif
