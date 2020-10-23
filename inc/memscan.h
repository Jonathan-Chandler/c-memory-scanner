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

int getWindowHandle(procInfo_t *procInfo, const char *windowTitle);
int getProcessId(procInfo_t *procInfo);
int getProcessHandle(procInfo_t *procInfo);
int closeProcessHandle(procInfo_t *procInfo);

int initialize(procInfo_t **procInfo, const char *windowTitle);
int destroy(procInfo_t **procInfo);

mblock_t* create_block_list(procInfo_t *procInfo);
int update_block_list(mblock_t *mb_list);
int search_block_list(procInfo_t *current_scan, uint8_t *value, int value_size);
int dump_block_list(mblock_t *mb_list);
int dump_list_addr(mblock_t *mb_list, int addr);
int dump_scan_results(procInfo_t *current_scan);

#endif
