#include "ecl/ecl.h"
#include <stdio.h>

extern void init_darkstone(cl_object);

int main() {
  char* argv;
  char** pargv;

  argv = "app";
  pargv = &argv;

  cl_boot(1, pargv);
  ecl_init_module(NULL, init_darkstone);
  cl_eval(c_string_to_object("(ecl-darkstone-trainer::main-swank)"));

  cl_shutdown();
  return 0;
}
