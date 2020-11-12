#include <windows.h>
#include "memory_scan.h"
#include "test-memory_scan.h"
#include "minunit.h"

// getWindowHandle(&hWindow, "Twitch");
// getProcessId(hWindow, &proc_id);
// getProcessHandle(&hProcess, proc_id);
// closeProcessHandle(&hProcess);
// 
// memscan_initialize(&block, "Twitch");
// memscan_destroy(&block);

mem_scan_t *this_scan;

char *test_mem_scan_init()
{
  mu_assert("Unit Test Error: mem_scan_init allows null output pointer", mem_scan_init(NULL, "test_application") != 0);
  mu_assert("Unit Test Error: mem_scan_init allows null window title", mem_scan_init(&this_scan, NULL) != 0);
  mu_assert("Unit Test Error: mem_scan_init allows empty \"\" window title", mem_scan_init(&this_scan, "") != 0);
  mu_assert("Unit Test Error: mem_scan_init fails", mem_scan_init(&this_scan, "test_application") == 0);
  mu_assert("Unit Test Error: mem_scan_init returns null", this_scan != 0);

  return 0;
}

char *test_mem_scan_destroy()
{
  mem_scan_t *null_scan = NULL;

  mu_assert("Unit Test Error: mem_scan_destroy allows null pointer", mem_scan_destroy(NULL) != 0);
  mu_assert("Unit Test Error: mem_scan_destroy allows pointer to null", mem_scan_destroy(&null_scan) != 0);
  mu_assert("Unit Test Error: mem_scan_destroy allows scan containing null proc_info", mem_scan_destroy(&null_scan) != 0);

  mu_assert("Unit Test Error: mem_scan_destroy fails to destroy mem_scan", mem_scan_destroy(&this_scan) == 0);
  mu_assert("Unit Test Error: mem_scan_destroy did not set pointer to null", this_scan == 0);

  return 0;
}
//
////char * test_getProcessId(HWND hWindow, DWORD *proc_id);
////char * test_getProcessHandle(HANDLE *hProcess, DWORD proc_id);
////char * test_closeProcessHandle(HANDLE *hProcess);
////char *
////char * test_initialize(mblock_t *block, const char *windowTitle);
////char * test_destroy(mblock_t *block);
//

char *test_all_memory_scan()
{
  char *res = 0;

  if ((res = test_mem_scan_init()) != 0)
    return res;
  
  if ((res = test_mem_scan_destroy()) != 0)
    return res;
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

