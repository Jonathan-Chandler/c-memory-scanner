#include <stdio.h>
#include <windows.h>
#include "process_info.h"
#include "test-process_info.h"
#include "minunit.h"

// getWindowHandle(&hWindow, "Twitch");
// getProcessId(hWindow, &proc_id);
// getProcessHandle(&hProcess, proc_id);
// closeProcessHandle(&hProcess);
// 
// memscan_initialize(&block, "Twitch");
// memscan_destroy(&block);

proc_info_t *this_proc_info;

char *test_process_info_init()
{
  mu_assert("Unit Test Error: proc_info_init allows null output pointer", proc_info_init(NULL, "test_application") != 0);
  mu_assert("Unit Test Error: proc_info_init allows null window title", proc_info_init(&this_proc_info, NULL) != 0);
  mu_assert("Unit Test Error: proc_info_init allows empty \"\" window title", proc_info_init(&this_proc_info, "") != 0);
  mu_assert("Unit Test Error: proc_info_init fails", proc_info_init(&this_proc_info, "test_application") == 0);
  mu_assert("Unit Test Error: proc_info_init returns null", this_proc_info != 0);

  return 0;
}

char *test_process_info_destroy()
{
  proc_info_t *null_proc_info = NULL;
  mu_assert("Unit Test Error: proc_info_destroy allows null pointer", proc_info_destroy(NULL) != 0);
  mu_assert("Unit Test Error: proc_info_destroy allows pointer to null", proc_info_destroy(&null_proc_info) != 0);

  mu_assert("Unit Test Error: proc_info_destroy fails to destroy process info", proc_info_destroy(&this_proc_info) == 0);
  mu_assert("Unit Test Error: proc_info_destroy did not set pointer to null", this_proc_info == 0);

  return 0;
}

char *test_all_process_info()
{
  char *res = 0;

  if ((res = test_process_info_init()) != 0)
    return res;
  
  if ((res = test_process_info_destroy()) != 0)
    return res;

  return 0;
}

