#include <windows.h>
#include <stdio.h>
#include "memory_page.h"
#include "memory_manager.h"
#include "test-memory_page.h"
#include "test-memory_manager.h"
#include "minunit.h"

#include <stdint.h>

//static const LPCVOID save_lp_base_addr = (LPCVOID)0x12345678;
//static const SIZE_T save_n_size = 32;
//static const char save_buffer[] = "0123456789ABCDEF0123456789ABCDEF";
//static const char* save_file_name = "data/unit_tests/unit_test_save.dat";
static const char* save_file_dir = "data/unit_tests";
static const SIZE_T test_page_size = 32;

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

char *test_mem_mgr_node_init_destroy()
{
  mem_mgr_node_t *pTestNode = NULL;
  mem_page_t *pTestPage = NULL;
  mem_mgr_node_t *pNodeNull = NULL;

  // allocate page for node
  mu_assert("Unit Test Error: mem_page_init failed to allocate page", mem_page_init(&pTestPage, test_page_size) == 0);
  mu_assert("Unit Test Error: mem_page_init failed to allocate page", pTestPage != NULL);

  // test node init with invalid params
  mu_assert("Unit Test Error: mem_mgr_node_init allows invalid pointer", mem_mgr_node_init(&pTestNode, NULL) != 0);
  mu_assert("Unit Test Error: mem_mgr_node_init allows invalid pointer", mem_mgr_node_init(NULL, pTestPage) != 0);

  // init test node
  mu_assert("Unit Test Error: mem_mgr_node_init page1 fails with valid pointer", mem_mgr_node_init(&pTestNode, pTestPage) == 0);

  // test node delete with invalid nodes
  mu_assert("Unit Test Error: mem_mgr_node_destroy allows invalid pointer", mem_mgr_node_destroy(NULL) != 0);
  mu_assert("Unit Test Error: mem_mgr_node_destroy allows invalid pointer", mem_mgr_node_destroy(&pNodeNull) != 0);

  // test destroy with valid node
  mu_assert("Unit Test Error: mem_mgr_node_destroy fails with valid pointer", mem_mgr_node_destroy(&pTestNode) == 0);
  mu_assert("Unit Test Error: mem_mgr_node_destroy fails to set pointer to NULL", pTestNode == NULL);

  return 0;
}

char *test_mem_mgr_add_delete_node()
{
  mem_mgr_t *this_mgr = NULL;
  mem_mgr_node_t *pNode1 = NULL;
  mem_mgr_node_t *pNode2 = NULL;
  mem_mgr_node_t *pNode3 = NULL;
  mem_page_t *pPage1 = NULL;
  mem_page_t *pPage2 = NULL;
  mem_page_t *pPage3 = NULL;
  
  // init manager
  mu_assert("Unit Test Error: mem_mgr_init fails with valid pointer", mem_mgr_init(&this_mgr) == 0);

  // init pages
  mu_assert("Unit Test Error: mem_page_init page1 fails with valid pointer", mem_page_init(&pPage1, test_page_size) == 0);
  mu_assert("Unit Test Error: mem_page_init page2 fails with valid pointer", mem_page_init(&pPage2, test_page_size) == 0);
  mu_assert("Unit Test Error: mem_page_init page2 fails with valid pointer", mem_page_init(&pPage3, test_page_size) == 0);

  // init nodes
  mu_assert("Unit Test Error: mem_mgr_node_init page1 fails with valid pointer", mem_mgr_node_init(&pNode1, pPage1) == 0);
  mu_assert("Unit Test Error: mem_mgr_node_init page2 fails with valid pointer", mem_mgr_node_init(&pNode2, pPage2) == 0);
  mu_assert("Unit Test Error: mem_mgr_node_init page3 fails with valid pointer", mem_mgr_node_init(&pNode3, pPage2) == 0);

  // add node does not allow invalid pointer
  mu_assert("Unit Test Error: mem_mgr_add_node allows invalid manager pointer", mem_mgr_add_node(NULL, pNode1) != 0);
  mu_assert("Unit Test Error: mem_mgr_add_node allows invalid node pointer", mem_mgr_add_node(this_mgr, NULL) != 0);

  // manager add nodes
  mu_assert("Unit Test Error: mem_mgr_add_node for pNode1 fails with valid pointer", mem_mgr_add_node(this_mgr, pNode1) == 0);
  mu_assert("Unit Test Error: mem_mgr_add_node for pNode2 fails with valid pointer", mem_mgr_add_node(this_mgr, pNode2) == 0);
  mu_assert("Unit Test Error: mem_mgr_add_node for pNode3 fails with valid pointer", mem_mgr_add_node(this_mgr, pNode3) == 0);

  // delete node does not allow invalid pointer
  mu_assert("Unit Test Error: mem_mgr_del_node allows invalid pointer", mem_mgr_del_node(NULL, pNode1) != 0);
  mu_assert("Unit Test Error: mem_mgr_del_node allows invalid pointer", mem_mgr_del_node(this_mgr, NULL) != 0);

  // manager delete node
  mu_assert("Unit Test Error: mem_mgr_del_node for pNode2 fails with valid pointer", mem_mgr_del_node(this_mgr, pNode2) == 0);
  mu_assert("Unit Test Error: mem_mgr_del_node for pNode1 fails with valid pointer", mem_mgr_del_node(this_mgr, pNode1) == 0);
  mu_assert("Unit Test Error: mem_mgr_del_node for pNode3 fails with valid pointer", mem_mgr_del_node(this_mgr, pNode3) == 0);
  mu_assert("Unit Test Error: mem_mgr_del_node did not set this_mgr->pFirstNode to null", this_mgr->pFirstNode == NULL);

  // manager deallocate
  mu_assert("Unit Test Error: mem_mgr_destroy fails with valid node list", mem_mgr_destroy(&this_mgr) == 0);

  return 0;
}

char *test_mem_mgr_save_load_dir()
{
  mem_mgr_t *this_mgr = NULL;
  mem_mgr_node_t *pNode1 = NULL;
  mem_mgr_node_t *pNode2 = NULL;
  mem_mgr_node_t *pNode3 = NULL;
  mem_page_t *pPage1 = NULL;
  mem_page_t *pPage2 = NULL;
  mem_page_t *pPage3 = NULL;
  const char data1[] = "atoehusaotneuh";
  const char data2[] = "saonteuhsathii";
  const char data3[] = "saoeidbaosecna";
  SIZE_T test_page_size = sizeof(data1);
  const LPCVOID lpPageAddr1 = (LPCVOID)0x12345678;
  const LPCVOID lpPageAddr2 = (LPCVOID)0x09876543;
  const LPCVOID lpPageAddr3 = (LPCVOID)0xABCDEF01;
  static const char* save_dir_name = "data/unit_tests/save_dir";
  
  // init manager
  mu_assert("Unit Test Error: mem_mgr_init fails with valid pointer", mem_mgr_init(&this_mgr) == 0);

  // init pages
  mu_assert("Unit Test Error: mem_page_init page1 fails with valid pointer", mem_page_init(&pPage1, test_page_size) == 0);
  mu_assert("Unit Test Error: mem_page_init page2 fails with valid pointer", mem_page_init(&pPage2, test_page_size) == 0);
  mu_assert("Unit Test Error: mem_page_init page3 fails with valid pointer", mem_page_init(&pPage3, test_page_size) == 0);

  // copy page data
  mu_assert("Unit Test Error: mem_page_init failed to copy page1", mem_page_load_buffer(pPage1, lpPageAddr1, test_page_size, data1) == 0);
  mu_assert("Unit Test Error: mem_page_init failed to copy page2", mem_page_load_buffer(pPage2, lpPageAddr2, test_page_size, data2) == 0);
  mu_assert("Unit Test Error: mem_page_init failed to copy page3", mem_page_load_buffer(pPage3, lpPageAddr3, test_page_size, data3) == 0);

  // init nodes
  mu_assert("Unit Test Error: mem_mgr_node_init page1 fails with valid pointer", mem_mgr_node_init(&pNode1, pPage1) == 0);
  mu_assert("Unit Test Error: mem_mgr_node_init page2 fails with valid pointer", mem_mgr_node_init(&pNode2, pPage2) == 0);
  mu_assert("Unit Test Error: mem_mgr_node_init page2 fails with valid pointer", mem_mgr_node_init(&pNode3, pPage3) == 0);

  // add nodes
  mu_assert("Unit Test Error: mem_mgr_add_node for pNode1 fails with valid pointer", mem_mgr_add_node(this_mgr, pNode1) == 0);
  mu_assert("Unit Test Error: mem_mgr_add_node for pNode2 fails with valid pointer", mem_mgr_add_node(this_mgr, pNode2) == 0);
  mu_assert("Unit Test Error: mem_mgr_add_node for pNode3 fails with valid pointer", mem_mgr_add_node(this_mgr, pNode3) == 0);

  // invalid save_dir parameters
  mu_assert("Unit Test Error: mem_mgr_save_dir allows NULL mem_mgr", mem_mgr_save_dir(NULL, save_file_dir) != 0);
  mu_assert("Unit Test Error: mem_mgr_save_dir allows null dir name", mem_mgr_save_dir(this_mgr, NULL) != 0);
  mu_assert("Unit Test Error: mem_mgr_save_dir allows blank dir name", mem_mgr_save_dir(this_mgr, "") != 0);

  // save dir
  mu_assert("Unit Test Error: mem_mgr_save_dir fails with valid pointer", mem_mgr_save_dir(this_mgr, save_dir_name) == 0);

  // invalid load_dir parameters
  mu_assert("Unit Test Error: mem_mgr_load_dir allows NULL mem_mgr", mem_mgr_load_dir(NULL, save_file_dir) != 0);
  mu_assert("Unit Test Error: mem_mgr_load_dir allows null dir name", mem_mgr_load_dir(this_mgr, NULL) != 0);
  mu_assert("Unit Test Error: mem_mgr_load_dir allows blank dir name", mem_mgr_load_dir(this_mgr, "") != 0);

  // load dir
  //mu_assert("Unit Test Error: mem_mgr_init fails with valid pointer", mem_mgr_load_dir(&this_mgr) == 0);

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

  if ((res = test_mem_mgr_node_init_destroy()) != 0)
    return res;
  
  if ((res = test_mem_mgr_add_delete_node()) != 0)
    return res;

  if ((res = test_mem_mgr_save_load_dir()) != 0)
    return res;
  
  return 0;
}


