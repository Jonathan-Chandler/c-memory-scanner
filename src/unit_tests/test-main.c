#include <stdio.h>
#include "unit_tests/minunit.h"
#include "unit_tests/test-memscan.h"

int tests_run = 0;
int bar = 5;
 
char * test_bar() 
{
  mu_assert("error, bar != 5", bar == 5);
  return 0;
}

char * all_tests() 
{
  mu_run_test(test_getWindowHandle);

  mu_run_test(test_foo);
  mu_run_test(test_bar);
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

