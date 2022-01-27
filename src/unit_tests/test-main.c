#include <stdio.h>
#include <stdbool.h>
#include "debug.h"
#include "minunit.h"
#include "test-process_info.h"
#include "test-memory_page.h"
#include "test-memory_manager.h"

//bool debug_print = false;
int tests_run = 0;
 
char* blank_test()
{
  return 0;
}
 
char* all_tests() 
{
  char *res;

  //if ((res = test_all_process_info()) != 0)
  //  return res;

  if ((res = test_all_mem_page()) != 0)
    return res;

  if ((res = test_all_mem_mgr()) != 0)
    return res;

  return 0;
}

int main(int argc, char **argv)
{
  char *result;

  // disable debug messages for unit tests
  debug_level = DEBUG_LOG_NONE;

  result = all_tests();
  if (result != 0) 
  {
    printf("\n");
    printf("********************************************************************************************************************************************************\n");
    printf("%s\n", result);
    printf("********************************************************************************************************************************************************\n");
    printf("\n");
  }
  else 
  {
    printf("\n");
    printf("********************************************************************************************************************************************************\n");
    printf("ALL TESTS PASSED\n");
    printf("********************************************************************************************************************************************************\n");
    printf("\n");
  }

  printf("Tests run: %d\n", tests_run);
  return result != 0;
}

