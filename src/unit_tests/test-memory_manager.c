#include <windows.h>
#include <stdio.h>
#include "memory_page.h"
#include "memory_manager.h"
#include "test-memory_page.h"
#include "test-memory_manager.h"
#include "minunit.h"

//static const LPCVOID save_lp_base_addr = (LPCVOID)0x12345678;
//static const SIZE_T save_n_size = 32;
//static const char save_buffer[] = "0123456789ABCDEF0123456789ABCDEF";
//static const char* save_file_name = "data/unit_tests/unit_test_save.dat";
static const char* save_file_dir = "data/unit_tests";

char *test_mem_mgr_init_destroy()
{
  mem_mgr_t *this_mgr = NULL;

  // reject invalid
  mu_assert("Unit Test Error: mem_mgr_init allows null output pointer", mem_mgr_init(NULL) != 0);
  mu_assert("Unit Test Error: mem_mgr_init fails with valid pointer", mem_mgr_init(&this_mgr) == 0);

  // test destroy with valid and check set to null
  mu_assert("Unit Test Error: mem_mgr_destroy failed to deallocate", mem_mgr_destroy(&this_mgr) == 0);
  mu_assert("Unit Test Error: mem_mgr_destroy did not set manager to null", this_mgr == NULL);

  // test destroy with invalid
  mu_assert("Unit Test Error: mem_mgr_destroy allows null pointer", mem_mgr_destroy(NULL) != 0);

  return 0;
}

char *test_mem_mgr_load_dir()
{
  mem_mgr_t *this_mgr = NULL;
  mu_assert("Unit Test Error: mem_mgr_load_dir allows null mgr", mem_mgr_load_dir(this_mgr, save_file_dir) != 0);

  mu_assert("Unit Test Error: mem_mgr_init fails with valid pointer", mem_mgr_init(&this_mgr) == 0);

  mu_assert("Unit Test Error: mem_mgr_load_dir allows null dir", mem_mgr_load_dir(this_mgr, NULL) != 0);
  mu_assert("Unit Test Error: mem_mgr_load_dir fails with valid dir", mem_mgr_load_dir(this_mgr, save_file_dir) == 0);

  mu_assert("Unit Test Error: mem_mgr_destroy failed to deallocate", mem_mgr_destroy(&this_mgr) == 0);

  return 0;
}


char *test_all_mem_mgr()
{
  char *res = 0;

  if ((res = test_mem_mgr_init_destroy()) != 0)
    return res;

  if ((res = test_mem_mgr_load_dir()) != 0)
    return res;
  
  return 0;
}


