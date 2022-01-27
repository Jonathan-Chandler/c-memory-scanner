#include <windows.h>
#include <stdio.h>
#include "memory_page.h"
#include "test-memory_page.h"
#include "minunit.h"

static const LPCVOID save_lp_base_addr = (LPCVOID)0x12345678;
static const SIZE_T save_n_size = 32;
static const char save_buffer[] = "0123456789ABCDEF0123456789ABCDEF";
static const char* save_file_name = "data/unit_tests/unit_test_save.dat";

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
  SIZE_T nTestSearchLen = 4;            // length of search string
  SIZE_T nTestSearchStartIndex = 0;     // buffer index to start search

  // save_buffer[] = "0123456789ABCDEF0123456789ABCDEF"; // string loaded in buffer for this test
  char *pBadTestSearchString = "WXYZ";  // search string with no matches
  char *pTestSearchString = "ABCD";     // search string with 2 matches at 0xA and 0x1A
  const SIZE_T firstMatch = 0xA;
  const SIZE_T secondMatch = 0x1A;

  // returned results
  bool bWasFound = true;
  SIZE_T nFoundIndex = 1;

  // load page from saved file in page_save test
  mu_assert("Unit Test Error: mem_page_load failed", mem_page_load(&this_page, save_file_name) == 0);

  // only valid pointers
  mu_assert("Mem page search allows null page", 
      mem_page_search(NULL, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &bWasFound, &nFoundIndex) != 0);
  mu_assert("Mem page allows 0 length search string", 
      mem_page_search(this_page, 0, pTestSearchString, nTestSearchStartIndex, &bWasFound, &nFoundIndex) != 0);
  mu_assert("Mem page allows null search", 
      mem_page_search(this_page, nTestSearchLen, NULL, nTestSearchStartIndex, &bWasFound, &nFoundIndex) != 0);
  mu_assert("Mem page allows null was found pointer", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, NULL, &nFoundIndex) != 0);
  mu_assert("Mem page allows NULL found index pointer", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &bWasFound, NULL) != 0);

  // test search with no matches
  mu_assert("Mem page first search fails with valid params", 
      mem_page_search(this_page, nTestSearchLen, pBadTestSearchString, nTestSearchStartIndex, &bWasFound, &nFoundIndex) == 0);
  mu_assert("Mem page search was found for unmatched string", bWasFound == false);
  mu_assert("Mem page search set index for unmatched string", nFoundIndex == 0);

  // test search first match
  mu_assert("Mem page first search fails with valid params", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &bWasFound, &nFoundIndex) == 0);
  mu_assert("Mem page search fails to set was found for first match", bWasFound == true);
  mu_assert("Mem page search fails to set found index for first match", firstMatch == nFoundIndex);

  // test search for second match starting at found index + 1
  bWasFound = false;
  nTestSearchStartIndex = nFoundIndex+1;
  mu_assert("Mem page second search fails with valid params", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &bWasFound, &nFoundIndex) == 0);
  mu_assert("Mem page search fails to set was found for second match", bWasFound == true);
  mu_assert("Mem page search fails to set found index for second match", secondMatch == nFoundIndex);

  // test third search - expect no more matches
  bWasFound = false;
  nTestSearchStartIndex = nFoundIndex+1;
  mu_assert("Mem page second search fails with valid params", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, nTestSearchStartIndex, &bWasFound, &nFoundIndex) == 0);
  mu_assert("Mem page search fails to set was found for second match", bWasFound == false);
  mu_assert("Mem page search fails to set found index for second match", nFoundIndex == 0);

  // test return values if search begin index is out of range
  bWasFound = true;
  nFoundIndex = 1;
  mu_assert("Mem page second search fails with valid params", 
      mem_page_search(this_page, nTestSearchLen, pTestSearchString, (save_n_size+1), &bWasFound, &nFoundIndex) == 0);
  mu_assert("Mem page search set was found for out of range", bWasFound == false);
  mu_assert("Mem page search fails to reset found index for out of range", nFoundIndex == 0);

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


