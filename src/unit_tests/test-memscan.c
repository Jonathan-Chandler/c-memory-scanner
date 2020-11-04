#include <windows.h>
#include "memscan.h"
#include "unit_tests/test-memscan.h"
#include "unit_tests/minunit.h"

int foo = 7;

char * test_foo()
{
  mu_assert("error, foo != 7", foo == 7);
  return 0;
}

// getWindowHandle(&hWindow, "Twitch");
// getProcessId(hWindow, &proc_id);
// getProcessHandle(&hProcess, proc_id);
// closeProcessHandle(&hProcess);
// 
// initialize(&block, "Twitch");
// destroy(&block);

char * test_getWindowHandle()
{
  procInfo_t *procInfo;
  initialize(&procInfo, "test_application");

  mu_assert("Unit Test Error: Initialization failed", initialize(&procInfo, "test_application") == 0);
  
// 
//   mu_assert("Unit Test Error: Initialization returned null pointer", procInfo == 0);
// 
// 
//   // returns existing window handle
//   mu_assert("Unit Test Error: Twitch window title was not found", procInfo->hWindow == 0);
// 
//   // fails with bad window handle
//   mu_assert("Unit Test Error: aoeuaoeuaoeuaoeuainagdc window title was found",  != 0);
// 
//   // fails with bad output pointer
//   mu_assert("Unit Test Error: Allowed getWindowHandle null pointer", getWindowHandle(NULL, "Twitch") != 0);
// 
  return 0;
}

//char * test_getProcessId(HWND hWindow, DWORD *proc_id);
//char * test_getProcessHandle(HANDLE *hProcess, DWORD proc_id);
//char * test_closeProcessHandle(HANDLE *hProcess);
//char *
//char * test_initialize(mblock_t *block, const char *windowTitle);
//char * test_destroy(mblock_t *block);

