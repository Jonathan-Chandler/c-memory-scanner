//#include "stdafx.h"
#include <chicken.h>
#include <windows.h>
#include <stdio.h>

int main(void) 
{
  HANDLE hDll;
  HANDLE hThread;
  //char* pcAppMainDllPath = "/c/work/c/memscan-dll/chicken-5.3.0-tests/test-foreign/launch_chicken.dll";
  char* pcAppMainDllFunction = "launch_chicken@4"; // name mingling app_main -> app_main@4 (dumpbin /EXPORTS launch_chicken.dll)
  //int retval = 0;
  char dummychar;
  uint32_t pDllFunction;
  DWORD dwRet;

  hDll = LoadLibraryA("launch_chicken.dll");
  if (hDll == 0)
  {
    printf("Error: LoadLibraryA could not find dll\n");
    return -ENXIO;
  }

  pDllFunction = (uint32_t)GetProcAddress(hDll, pcAppMainDllFunction);
  if(pDllFunction == 0) 
  {
    printf("Error: could not find proc addr\n");
    return -ENXIO;
  }

  printf("Creating new thread\n");
  hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)pDllFunction, hDll, 0, NULL);
  if(hThread == NULL) 
  {
    printf("Error: the remote thread could not be created at app_reconfigure_path for preload.dll\n");
    return -ENXIO;
  }

  WaitForSingleObject(hThread, INFINITE);
  GetExitCodeThread(hThread, &dwRet);
  printf("load dll returns addr 0x%08X\n", (uint32_t)dwRet);
  printf("thread ret value = 0x%08X\n", (uint32_t)hThread);

  dummychar = getchar();
  printf("dummychar %c\n", dummychar);

  /*Call the function*/
  printf("exit");

  return 0;
}
