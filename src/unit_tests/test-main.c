#include <stdio.h>
#include "minunit.h"
#include "test-memscan.h"
#include "test-memblock.h"

int tests_run = 0;
 
char* blank_test()
{
  return 0;
}
 
char* all_tests() 
{
  char *res;

  //mu_run_test(test_getWindowHandle);
  if ((res = test_all_memblock()) != 0)
    return res;

  //mu_run_test(blank_test);

  return 0;
}

int main(int argc, char **argv)
{
  char *result = all_tests();

  if (result != 0) 
  {
    printf("%s\n", result);
  }
  else 
  {
    printf("ALL TESTS PASSED\n");
  }

  printf("Tests run: %d\n", tests_run);
  return result != 0;
}

