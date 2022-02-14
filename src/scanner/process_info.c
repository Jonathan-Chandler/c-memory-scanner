#include <errno.h>
#include "debug.h"
#include "process_info.h"

int proc_info_get_window_handle(proc_info_t *pProcInfo, const char *pszWindowTitle);
int proc_info_get_process_id(proc_info_t *pProcInfo);
int proc_info_get_process_handle(proc_info_t *pProcInfo);
int proc_info_close_process_handle(proc_info_t *pProcInfo);

int proc_info_init(proc_info_t **ppProcInfo, const char *pszWindowTitle)
{
  int retval;
  proc_info_t *temp_info;

  if (ppProcInfo == 0)
  {
    debug_error("Null process information return pointer");
    return -EINVAL;
  }
  *ppProcInfo = 0;

  if (pszWindowTitle == 0)
  {
    debug_error("Null window title");
    return -EINVAL;
  }

  if (pszWindowTitle == 0)
  {
    debug_error("Null window title");
    return -EINVAL;
  }

  if (strcmp(pszWindowTitle, "") == 0)
  {
    debug_error("Empty process window title");
    return -EINVAL;
  }

  temp_info = malloc(sizeof(proc_info_t));
  if (temp_info == 0)
  {
    debug_error("Failed to allocate memory for ppProcInfo");
    return -ENOMEM;
  }

  if ( (retval = proc_info_get_window_handle(temp_info, pszWindowTitle)) < 0)
  {
    return retval;
  }

  if ( (retval = proc_info_get_process_id(temp_info)) < 0)
  {
    debug_error("Fail to get window handle");
    return retval;
  }

  if ( (retval = proc_info_get_process_handle(temp_info)) < 0)
  {
    debug_error("Fail to get window handle");
    free(*ppProcInfo);
    return retval;
  }

  *ppProcInfo = temp_info;

#if 0
  printf("%s::%d::%s::ppProcInfo = %08X\n", __FILE__, __LINE__, __func__, (uint32_t)ppProcInfo);
  printf("%s::%d::%s::*ppMgr = %08X\n\n", __FILE__, __LINE__, __func__, (uint32_t)*ppProcInfo);
  //printf("%s::%d::%s::**ppMgr = %08X\n", __FILE__, __LINE__, __func__, (uint32_t)**ppProcInfo);
#endif

  return 0;
}

int proc_info_destroy(proc_info_t **ppProcInfo)
{
  int retval;

  if (ppProcInfo == 0)
  {
    debug_error("Null process information return pointer");
    return -EINVAL;
  }

  if (*ppProcInfo == 0)
  {
    debug_error("Null process information");
    return -EINVAL;
  }

  if ((retval = proc_info_close_process_handle(*ppProcInfo)) < 0)
  {
    debug_error("Fail to close process handle - %d", retval);
  }

  free(*ppProcInfo);
  *ppProcInfo = 0;
  return 0;
}

int proc_info_get_window_handle(proc_info_t *pProcInfo, const char *pszWindowTitle)
{
  if (pProcInfo == NULL)
  {
    debug_error("Null process information");
    return -EINVAL;
  }

  pProcInfo->hWindow = FindWindow(0, pszWindowTitle);

  if (pProcInfo->hWindow == 0)
  {
    debug_error("%s window not found", pszWindowTitle);
    return -EINVAL;
  }

  debug_verbose("Found %s window", pszWindowTitle);
  return 0;
}

int proc_info_get_process_id(proc_info_t *pProcInfo)
{
  if (pProcInfo->hWindow == 0)
  {
    debug_error("Null window handle");
    return -EINVAL;
  }

  GetWindowThreadProcessId(pProcInfo->hWindow, &pProcInfo->dwProcessId);
  if (pProcInfo->dwProcessId == 0)
  {
    debug_error("Could not get process id");
    return -ENXIO;
  }

  debug_verbose("Found process id: %lu", pProcInfo->dwProcessId);
  return 0;
}

int proc_info_get_process_handle(proc_info_t *pProcInfo)
{
  if (pProcInfo->dwProcessId == 0)
  {
    debug_error("Null process ID");
    return -EINVAL;
  }

  pProcInfo->hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pProcInfo->dwProcessId);

  if (pProcInfo->hProcess == 0)
  {
    debug_error("Failed to get handle for process");
    return -ENXIO;
  }

  debug_verbose("Open process handle: %u", (unsigned int) pProcInfo->hProcess);
  return 0;
}

int proc_info_close_process_handle(proc_info_t *pProcInfo)
{
  if (pProcInfo == 0)
  {
    debug_error("Null process info");
    return -EINVAL;
  }

  if (pProcInfo->hProcess == 0)
  {
    debug_error("Bad process handle");
    return -EINVAL;
  }

  debug_verbose("Closed process handle: %u", (unsigned int) pProcInfo->hProcess);
  CloseHandle(pProcInfo->hProcess);
  pProcInfo->hProcess = 0;

  return 0;
}

