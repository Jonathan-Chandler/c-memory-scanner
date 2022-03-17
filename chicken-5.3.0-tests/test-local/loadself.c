//#include "stdafx.h"
#include <chicken.h>
#include <windows.h>
#include <stdio.h>
//#include <errno.h>
//#include <stdint.h>
//#include <unistd.h>
//#include <pthread.h>
//#include <winbase.h>
//#include <psapi.h>

//typedef DWORD WINAPI (*pAppMain)(HMODULE hModule);
//int get_process(const char *pszWindowTitle, HANDLE *hProcess);
//int inject_dll(HANDLE hProcess, char *pszDllPath);

//extern double baz(int);

int main(void) 
{
  char buffer[ 256 ];
  char line[256];
  int status;

  //C_toplevel
  CHICKEN_run(CHICKEN_default_toplevel);

  while (1)
  {
    int i = 0;
    for (;;)
    {
      char c = fgetc(stdin);
      if (c == EOF)
      {
        line[i] = 0;
        break;
      }

      if (c == '\n')
      {
        line[i] = 0;
        break;
      }

      line[i] = c;

      i++;
    }
    if (line[0] == 0)
      break;

    //printf("%s\n", line);
    status = CHICKEN_eval_string_to_string(line, buffer, 255);
    if (!status)
    {
      CHICKEN_get_error_message(buffer, 255);
      printf("%s\n", buffer);
    }
    else
    {
      printf("%s\n", buffer);
    }
  }
  //assert(!status);

  if (status)
  {
    printf("test");
  }

  return 0;
}

#if 0
{
  //char* pcLoadAppMainDllPath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test5-local\\load_app_main.dll";
  //orig//char* pcAppMainDllPath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test5-local\\app_main.dll";
  //char* pcAppMainDllPath = "/c/work/c/memscan-dll/ecl-21.2.1-tests/multithreaded-attach-test5-local/app_main.dll";
  char* pcAppMainDllPath = "app_main.dll";
  int retval = 0;
  HANDLE hDll;
  HMODULE retlphModule[512] = {0};
  DWORD lpNeededBytes;
  int x = 0;
  HANDLE hProcess;
  pAppMain pMain;
  char dummychar;
  
  // get handle to this process
  hProcess = GetCurrentProcess();

  // PATH BACK /mingw32/bin:/usr/local/bin:/usr/bin:/bin:/c/Windows/System32:/c/Windows:/c/Windows/System32/Wbem:/c/Windows/System32/WindowsPowerShell/v1.0/:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl
  // PATH NEW /mingw32:/mingw32/bin:/usr/local/bin:/usr/bin:/bin:/c/Windows/System32:/c/Windows:/c/Windows/System32/Wbem:/c/Windows/System32/WindowsPowerShell/v1.0/:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl
  // LD_LIBRARY_PATH=/mingw32

  // load app_main.dll
  if ((hDll = LoadLibraryA(pcAppMainDllPath)) == 0)
  {
    printf("load app_main.dll returns null\n");
    dummychar = getchar();
    return -1;
  }

  sleep(2);
  pMain = (pAppMain)GetProcAddress(hDll, "app_main@4");
  //CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)pMain, hDll, 0, NULL));
  CreateThread(0, 0, (LPTHREAD_START_ROUTINE)pMain, hDll, 0, NULL);

  // print dll module list
  if (0 == EnumProcessModules(hProcess, retlphModule, sizeof(retlphModule), &lpNeededBytes))
  {
    printf("Fail enum process modules\n");
    return -1;
  }
  printf("lpNeededBytes = %d\n", (int)lpNeededBytes);
  x = 0;
  for (int i = 0; i < lpNeededBytes; i+=sizeof(retlphModule[0]))
  {
    char lpcModuleName[64] = {0};
    printf("retlphModule[%d]: 0x%08X\n", x, (uint32_t)retlphModule[x]);
    GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    printf("retlphModule[%d]: %s\n", x, lpcModuleName);
    x++;
  }
  printf("exit\n");

  dummychar = getchar();
  printf("dummychar %c\n", dummychar);

  ///*GetProcAddress*/
  // name mingling -> app_main@4
  ////pMain = (pAppMain)GetProcAddress(hDll, "app_main@4");
  ////if (pMain == NULL)
  ////{
  ////  printf("fail - null pointer fn\n");
  ////  getchar();
  ////  return -1;
  ////}

  ////pMain(hDll);

  // create LoadLibraryA thread to load dll at allocated path
  //CreateThread(hProcess, NULL, dwStackSize, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, pcAppMainDllPath, 0, NULL);
  //if(hThread == NULL) 
  //{
  //  printf("Error: the remote thread could not be created at app_reconfigure_path for preload.dll\n");
  //  return -ENXIO;
  //}

  /*Call the function*/
  printf("exit");

  //CloseHandle(hProcess);
  return retval;
}
#endif

