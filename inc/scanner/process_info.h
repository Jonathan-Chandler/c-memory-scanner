#ifndef __PROCESS_INFO_H__
#define __PROCESS_INFO_H__
#include <windows.h>

#define MEMINFO_PROTECT_IS_WRITABLE (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
#define MEMINFO_PROTECT_IS_READABLE (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE)
#define MEMINFO_PROTECT_IS_EXECUTABLE (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
// PAGE_GUARD

typedef struct 
{
  HWND hWindow;
  HANDLE hProcess;
  DWORD dwProcessId;
} proc_info_t;

int proc_info_init(proc_info_t **pProcInfo, const char *pszWindowTitle);
int proc_info_destroy(proc_info_t **pProcInfo);

#endif
