/* -*- mode: c;  -*-
   file: app_main.c
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "app_main.h"

//void run_swank();

//void ADD_APP_MAIN_API ADD_APP_MAIN_CALL app_reconfigure_path() 
//{
//  char* lpcAppMainDllDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";
//  char lpcOriginalPath[4096] = {0};
//  char lpcNewPath[4096] = {0};
//
//  GetEnvironmentVariable("PATH", lpcOriginalPath, sizeof(lpcOriginalPath));
//  printf("original PATH: %s\n\n", lpcOriginalPath);
//  strcpy(lpcNewPath, lpcAppMainDllDir);
//  strcpy(&lpcNewPath[strlen(lpcAppMainDllDir)], lpcOriginalPath);
//
//  printf("new PATH: %s\n\n", lpcNewPath);
//  SetEnvironmentVariable("PATH", lpcNewPath);
//
//  return;
//}

//typedef void __cdecl (*pAppMain)();
typedef unsigned int __stdcall (*pAppMain)(LPVOID lpParam);

//void ADD_APP_MAIN_API ADD_APP_MAIN_CALL app_reconfigure_path() 
ADD_APP_MAIN_API DWORD WINAPI app_reconfigure_path(LPVOID lpThreadParameter)
{
  char* lpcAppMainDllDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";
  char lpcOriginalPath[4096] = {0};
  char lpcNewPath[4096] = {0};
#if 0
  char* lpcAppMainDll = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\app_main.dll";
  HANDLE hDll;
  pAppMain pMain;
#endif

  GetEnvironmentVariable("PATH", lpcOriginalPath, sizeof(lpcOriginalPath));
  printf("original PATH: %s\n\n", lpcOriginalPath);
  strcpy(lpcNewPath, lpcAppMainDllDir);
  strcpy(&lpcNewPath[strlen(lpcAppMainDllDir)], lpcOriginalPath);

  printf("new PATH: %s\n\n", lpcNewPath);
  SetEnvironmentVariable("PATH", lpcNewPath);

#if 0
  if ((hDll = LoadLibraryA(lpcAppMainDll)) == 0)
  {
    printf("load library returns null\n");
    //getchar();
    return 0;
  }
  printf("hDll = 0x%08X\n", (uint32_t)hDll);

  ///*GetProcAddress*/
  pMain = (LPVOID)GetProcAddress(hDll, "app_main@4");
  if (pMain == NULL)
  {
    printf("fail - null pointer fn\n");
    //getchar();
    return 0;
  }
  //CreateThread(pMain);

  //CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)pMain, NULL, 0, NULL);
  //_beginthread((LPTHREAD_START_ROUTINE)pMain, 0, NULL);
  GC_beginthreadex(NULL, 268435456, pMain, NULL, 0, NULL);
#endif

  //pMain();
  
  ///*Call the function*/
  //printf("magicNumber = %d\n",magicNumber);
  //printf("&magicNumber = %08x\n",(uint32_t)&magicNumber);
  //getchar();

  return 0;
}

//BOOL ADD_APP_MAIN_API WINAPI DllMain(HMODULE hDLL, DWORD dwReason, LPVOID lpReserved) 
//{
//  /* open file */
//  FILE *file;
//  file = fopen("C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\test-dll-2\\inject-status.txt", "a+");
//
//  switch(dwReason) 
//  {
//    case DLL_PROCESS_ATTACH:
//      printf("DLL process attach function called\n");
//      //app_main();
//      break;
//    case DLL_PROCESS_DETACH:
//      break;
//    case DLL_THREAD_ATTACH:
//      break;
//    case DLL_THREAD_DETACH:
//      printf("DLL thread detach function called\n");
//      //fprintf(file, "DLL thread detach function called\n");
//      break;
//  }
//
//  /* close file */
//  fclose(file);
//
//  return TRUE;
//}
