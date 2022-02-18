/* -*- mode: c;  -*-
   file: app_main.c
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "app_main.h"

void run_swank();

void ADD_APP_MAIN_API ADD_APP_MAIN_CALL app_main() 
{
  char* argv = "app";
  char** pargv = &argv;

  cl_boot(1, pargv);
  atexit(cl_shutdown);

  /* Set up handler for Lisp errors to prevent buggy Lisp (an */
  /* imposibility, I know!) from killing the app. */
  const cl_env_ptr l_env = ecl_process_env();
  CL_CATCH_ALL_BEGIN(l_env) {
    CL_UNWIND_PROTECT_BEGIN(l_env) {
      run_swank();
    }
    CL_UNWIND_PROTECT_EXIT {}
    CL_UNWIND_PROTECT_END;
  }
  CL_CATCH_ALL_END;

  return;
}


BOOL ADD_APP_MAIN_API WINAPI DllMain(HMODULE hDLL, DWORD dwReason, LPVOID lpReserved) 
{
  /* open file */
  FILE *file;
  file = fopen("C:\\work\\c\\dll-test\\temp5.txt", "a+");

  switch(dwReason) 
  {
    case DLL_PROCESS_ATTACH:
      printf("DLL attach function called\n");
      fprintf(file, "DLL attach function called\n");
      break;
    case DLL_PROCESS_DETACH:
      fprintf(file, "DLL detach function called\n");
      break;
    case DLL_THREAD_ATTACH:
      printf("DLL thread attach function called\n");
      fprintf(file, "DLL thread attach function called\n");
      break;
    case DLL_THREAD_DETACH:
      fprintf(file, "DLL thread detach function called\n");
      break;
  }

  /* close file */
  fclose(file);

  return TRUE;
}


void run_swank() {
  /* TODO: Are embedded quotes really needed? */
  char start_swank[] = "\"start-swank-server.lisp\"";

  // DEPRECATED @coderef{c_string_to_object} – equivalent to @coderef{ecl_read_from_cstring}
  //cl_object cl_start_swank_path = c_string_to_object(start_swank); 
  cl_object cl_start_swank_path = ecl_read_from_cstring(start_swank);
  cl_object cl_load =  ecl_make_symbol("LOAD","CL");
  cl_funcall(2, cl_load, cl_start_swank_path);
  return;
}
