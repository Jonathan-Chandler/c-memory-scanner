/* -*- mode: c;  -*-
   file: app_main.c
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <ecl/ecl.h>
#include "app_main.h"
#include <windows.h>

void run_swank();

//typedef DWORD (__stdcall *LPTHREAD_START_ROUTINE) (  
//    [in] LPVOID lpThreadParameter  
//);

DWORD WINAPI threadTest2(LPVOID lpParameter)
{
    Sleep(1);
    int x[20];
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
      x[i] = i*19;
    }

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
      //printf("Printing %d GeeksQuiz from Thread \n", x[i]);
    }

    return 0;
}

//ADD_APP_MAIN_API ADD_APP_MAIN_CALL void app_main(void)
//static long unsigned int __stdcall app_main(void *pvoid)
__declspec(dllexport) long unsigned int __stdcall app_main(void *pvoid)
{
#if 0
  HANDLE thread_id[10] = {0};
  printf("test\n");

  for (int i = 0; i < sizeof(thread_id)/sizeof(thread_id[0]); i++)
  {
    thread_id[i] = CreateThread(0, 0, threadTest2, NULL, 0, NULL);
  }

  for (int i = 0; i < sizeof(thread_id)/sizeof(thread_id[0]); i++)
  {
    CloseHandle(thread_id[i]);
  }

#else
  FILE *resultFile;
  char *resultFilePath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\start_app_main.txt";
  char *pargv = "app";

  // write result
  resultFile = fopen(resultFilePath, "w+");
  if (resultFile != NULL)
  {
    fprintf(resultFile, "starting swank\n");
    fclose(resultFile);
  }
  printf("starting swank\n");

  //ecl_set_option(ECL_OPT_C_STACK_SIZE, 16777216);
  //ecl_set_option(ECL_OPT_LISP_STACK_SIZE, 1048576);
  cl_boot(1, &pargv);
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
#endif

  return 0;
}

BOOL ADD_APP_MAIN_API WINAPI DllMain(HMODULE hDLL, DWORD dwReason, LPVOID lpReserved) 
{
  /* open file */
  LPVOID lpLaunchSwank;
  FILE *pLaunchSwankAddr;
  char *pLaunchSwankAddrDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\launch_swank_addr";

  switch(dwReason) 
  {
    case DLL_PROCESS_ATTACH:
      //printf("launch thread swank");
      //lpLaunchSwank = (LPVOID)GetProcAddress(hDLL, "app_main@4");
      //if (lpAppMain != NULL)
      //{
      //  fopen(pLaunchSwankAddrDir, "wb+");
      //  // dumpbin /EXPORTS app_main.dll
      //  // app_main@4
      //  printf("launch set_path thread at address 0x%08X\n", (uint32_t)lpAppMain);
      //  // open thread to set PATH for host
      //  //CreateThread(NULL, 0, lpAppMain, NULL, 0, NULL);

      //  // wait and then close handle
      //  //WaitForSingleObject(hThread, INFINITE);
      //  //CloseHandle(hThread);
      //  printf("launched swank thread\n");
      //}
      //else
      //{
      //  printf("Fail to create swank thread\n");
      //}

      lpLaunchSwank = (LPVOID)GetProcAddress(hDLL, "app_main@4");
      printf("get launch swank addr 0x%08X\n", (uint32_t)lpLaunchSwank);
      pLaunchSwankAddr = fopen(pLaunchSwankAddrDir, "wb+");
      if (pLaunchSwankAddr != NULL)
      {
        //fwrite(pLoadAppSetPathFile, "%08X", (uint32_t)lpSetPath);
        fwrite(&lpLaunchSwank, sizeof(lpLaunchSwank), 1, pLaunchSwankAddr);
        fclose(pLaunchSwankAddr);
      }
      else
      {
        printf("Fail to write addr launch swank\n");
      }

      //printf("DLL process attach function called\n");
      //fprintf(file, "DLL process attach function called\n");
      //app_main();
      break;
    case DLL_PROCESS_DETACH:
      //printf("DLL process detach function called\n");
      //fprintf(file, "DLL process detach function called\n");
      break;
    case DLL_THREAD_ATTACH:
      //printf("DLL thread attach function called\n");
      //fprintf(file, "DLL thread attach function called\n");
      break;
    case DLL_THREAD_DETACH:
      //printf("DLL thread detach function called\n");
      //fprintf(file, "DLL thread detach function called\n");
      break;
  }

  /* close file */
  //fclose(file);

  return TRUE;
}


void run_swank() {
  /* TODO: Are embedded quotes really needed? */
  //char start_swank[] = "\"C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\start-swank-server.lisp\"";
  char start_swank[] = "\"start-swank-server.lisp\"";

  // DEPRECATED @coderef{c_string_to_object} – equivalent to @coderef{ecl_read_from_cstring}
  //cl_object cl_start_swank_path = c_string_to_object(start_swank); 
  cl_object cl_start_swank_path = ecl_read_from_cstring(start_swank);
  cl_object cl_load =  ecl_make_symbol("LOAD","CL");
  cl_funcall(2, cl_load, cl_start_swank_path);
  return;
}
