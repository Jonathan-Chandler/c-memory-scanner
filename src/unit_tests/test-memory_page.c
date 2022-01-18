#include <windows.h>
#include <stdio.h>
#include "memory_page.h"
#include "test-memory_page.h"
#include "minunit.h"

const LPCVOID save_lp_base_addr = (LPCVOID)0x12345678;
const SIZE_T save_n_size = 15;
const char save_buffer[] = "0123456789ABCDEF0123456789ABCDEF";
const char* save_file_name = "data/unit_tests/unit_test_save.dat";

char *test_mem_page_init_destroy()
{
  mem_page_t *this_page = NULL;

  // reject invalid
  mu_assert("Unit Test Error: mem_page_init allows null output pointer", mem_page_init(NULL, 10) != 0);
  mu_assert("Unit Test Error: mem_page_init allows zero size buffer", mem_page_init(&this_page, 0) != 0);

  // initialize with valid values and test returned
  mu_assert("Unit Test Error: mem_page_init failed to allocate", mem_page_init(&this_page, save_n_size) == 0);
  mu_assert("Unit Test Error: mem_page_init returned null page", this_page != 0);
  mu_assert("Unit Test Error: mem_page_init did not set buffer size", this_page->nSize == save_n_size);

  // test destroy with valid and check set to null
  mu_assert("Unit Test Error: mem_page_destroy failed to deallocate page", mem_page_destroy(&this_page) == 0);
  mu_assert("Unit Test Error: mem_page_destroy did not set page to null", this_page == NULL);

  // test destroy with invalid
  mu_assert("Unit Test Error: mem_page_destroy allows null pointer", mem_page_destroy(NULL) != 0);

  return 0;
}

char *test_mem_page_save()
{
  mem_page_t *this_page = NULL;

  mu_assert("Unit Test Error: mem_page_init failed to allocate", mem_page_init(&this_page, save_n_size) == 0);

  // set values
  this_page->lpBaseAddr = save_lp_base_addr;
  for (SIZE_T i = 0; i < save_n_size; i++)
  {
    this_page->pcBuffer[i] = save_buffer[i];
  }

  // check size was set
  mu_assert("Unit Test Error: mem_page_init failed set nSize", this_page->nSize == save_n_size);

  // reject invalid
  mu_assert("Unit Test Error: mem_page_save allows null page", mem_page_save(NULL, save_file_name) != 0);
  mu_assert("Unit Test Error: mem_page_save allows null file name", mem_page_save(this_page, NULL) != 0);
  mu_assert("Unit Test Error: mem_page_save allows empty file name", mem_page_save(this_page, "") != 0);

  // save and destroy
  mu_assert("Unit Test Error: mem_page_save fails with valid file name", mem_page_save(this_page, save_file_name) == 0);
  mu_assert("Unit Test Error: mem_page_destroy failed to deallocate page", mem_page_destroy(&this_page) == 0);

  return 0;
}

char *test_mem_page_load()
{
  mem_page_t *this_page = NULL;

  // don't accept invalid param
  mu_assert("Unit Test Error: mem_page_load allows null page", mem_page_load(NULL, save_file_name) != 0);
  mu_assert("Unit Test Error: mem_page_load allows null file name", mem_page_load(&this_page, NULL) != 0);
  mu_assert("Unit Test Error: mem_page_load allows empty file name", mem_page_load(&this_page, "") != 0);

  // loaded file matches saved file values
  mu_assert("Unit Test Error: mem_page_load failed", mem_page_load(&this_page, save_file_name) == 0);
  mu_assert("Unit Test Error: loaded file did not match saved lpBaseAddr", this_page->lpBaseAddr == save_lp_base_addr);
  mu_assert("Unit Test Error: loaded file did not match saved nSize", this_page->nSize == save_n_size);
  for (SIZE_T i = 0; i < save_n_size; i++)
  {
    mu_assert("Unit Test Error: loaded file did not match buffer values", this_page->pcBuffer[i] == save_buffer[i]);
  }

  // destroy succeeds
  mu_assert("Unit Test Error: mem_page_destroy failed to deallocate page", mem_page_destroy(&this_page) == 0);

  return 0;
}

char *test_mem_page_search()
{
  mem_page_t *this_page = NULL;
  // search
  SIZE_T nTestSearchLen = 0;
  char *pTestSearchString = "abcd";
  SIZE_T nTestSearchStartIndex = 0;

  // results
  bool wasFound = true;
  SIZE_T nFoundIndex = 1;


  //mem_page_search(mem_page_t *pPage, const SIZE_T nStringLength, const char *pSearch, SIZE_T nStartIndex, bool *bWasFound, SIZE_T *nFoundIndex)
  // only valid pointers
  mu_assert("Mem page search allows null page", 
      mem_page_search(NULL, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &wasFound, &nFoundIndex) != 0);

  mu_assert("Mem page allows 0 length search string", 
      mem_page_search(this_page, 0, pTestSearchString, nTestSearchStartIndex, &wasFound, &nFoundIndex) != 0);

  mu_assert("Mem page allows null search", 
      mem_page_search(this_page, nTestSearchLen, NULL, nTestSearchStartIndex, &wasFound, &nFoundIndex) != 0);

  mu_assert("Mem page allows null was found pointer", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, NULL, &nFoundIndex) != 0);

  mu_assert("Mem page allows NULL found index pointer", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &wasFound, NULL) != 0);

  mu_assert("Mem page search fails with valid params", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &wasFound, &nFoundIndex) == 0);

  return 0;
}

char *test_all_mem_page()
{
  char *res = 0;

  if ((res = test_mem_page_init_destroy()) != 0)
    return res;
  
  if ((res = test_mem_page_save()) != 0)
    return res;

  if ((res = test_mem_page_load()) != 0)
    return res;

  if ((res = test_mem_page_search()) != 0)
    return res;

  return 0;
}


