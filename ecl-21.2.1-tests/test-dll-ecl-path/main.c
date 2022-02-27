//#include "stdafx.h"
#include <windows.h>
#include <psapi.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>

int main(void) 
{
  char* lpcAppMainDll = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\app_main.dll";
  char* lpPreloadDll = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\preload.dll";
  //char* lpcAppMainDllDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";

  const char *pszWindowTitle = "dummy-target";
  //const char *pszWindowTitle = "DarkStone DSI";
  DWORD dwProcessId;        // remote process id
  HANDLE hProcess;          // handle remote process

  HMODULE retlphModule[100] = {0};

#if 0
  char lpcOriginalPath[8192] = {0};
  char lpcNewPath[8192] = {0};
#endif

  // function pointers in foreign process
  LPVOID lpLoadLibAddr = 0;       // kernel32.dll address of LoadLibraryA
  LPVOID lpAppMainAddr = 0;       // app_main.dll address of app_main
  LPVOID lpDllPreloadMain = 0;       // app_main.dll address of app_main

  // addresses in foreign address that these paths are copied to
  LPVOID lpAllocatedAppMainDll;
  LPVOID lpAllocatedPreloadDllPath;

  HWND hWindow;
  int retval = 0;
  HANDLE hThreadLoadPreload = 0;
  HANDLE hThreadLoadAppMain = 0;

  HANDLE hThreadLaunchPreload = 0;
  HANDLE hThreadLaunchAppMain = 0;
  int n,x;
  DWORD ret;
  DWORD lpNeededBytes;

#if 0
  GetEnvironmentVariable("PATH", lpcOriginalPath, sizeof(lpcOriginalPath));
  printf("original PATH: %s\n\n", lpcOriginalPath);
  //strcpy();
  strcpy(lpcNewPath, lpcAppMainDllDir);
  strcpy(&lpcNewPath[strlen(lpcAppMainDllDir)], lpcOriginalPath);

  printf("new PATH: %s\n\n", lpcNewPath);
  SetEnvironmentVariable("PATH", lpcNewPath);
#endif

  hWindow = FindWindow(0, pszWindowTitle);
  if (hWindow == 0)
  {
    printf("%s window not found\n", pszWindowTitle);
    return -EINVAL;
    goto exit_crt;
  }

  GetWindowThreadProcessId(hWindow, &dwProcessId);
  if (dwProcessId == 0)
  {
    printf("Could not get process id\n");
    return -ENXIO;
  }

  // get process handle
  hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);
  if (hProcess == NULL) 
  {
    printf("Error: the specified process couldn’t be found\n");
    return -ENXIO;
  }

  // find kernel32.LoadLibraryExA
  lpLoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
  if(lpLoadLibAddr == NULL) 
  {
    printf("Error: the LoadLibraryExA function was not found inside kernel32.dll library\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("Found address of kernel32 LoadLibraryA: 0x%08X\n", lpLoadLibAddr);
  }


  // Allocate memory inside the target process address space.
  lpAllocatedPreloadDllPath = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(lpPreloadDll), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedPreloadDllPath == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }

  // write path to preload DLL
  n = WriteProcessMemory(hProcess, lpAllocatedPreloadDllPath, lpPreloadDll, strlen(lpPreloadDll), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    retval = -ENXIO;
    goto exit_crt;
  }

  if (lpAllocatedPreloadDllPath != 0)
  {
    // load preload.dll in remote process
    hThreadLoadPreload = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, (LPVOID)lpAllocatedPreloadDllPath, 0, NULL);
    if(hThreadLoadPreload == NULL) 
    {
      printf("Error: the remote thread could not be created for kernel32.dll LoadLibraryExA\n");
      retval = -ENXIO;
      goto exit_crt;
    }

    printf("threadId preload = 0x%08X\n", hThreadLoadPreload);

    printf("wait for object\n");
    WaitForSingleObject(hThreadLoadPreload, INFINITE);
    ret = 0;
    GetExitCodeThread(hThreadLoadPreload, &ret);
    printf("thread returns: 0x%08X\n", ret);
  }
  else
  {
    printf("Error: the remote thread preload\n");
    retval = -ENXIO;
    goto exit_crt;
  }

  // enumerate dlls to check if dll is in list
  if (0 == EnumProcessModules(hProcess, retlphModule, sizeof(retlphModule), &lpNeededBytes))
  {
    printf("Fail enum process modules\n");
  }

  x = 0;
  for (int i = 0; i < lpNeededBytes; i+=sizeof(retlphModule[0]))
  {
    char lpcModuleName[2048] = {0};
    printf("retlphModule[%d]: 0x%08X\n", x, retlphModule[x]);
    //GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    //printf("retlphModule[%d]: %s\n", x, lpcModuleName);

    GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    printf("retlphModule[%d]: %s\n\n", x, lpcModuleName);

    if (0 == strcmp(lpcModuleName, "preload.dll"))
    {
      printf("found preload handle at retlphModule[%d]: %s\n\n", x, lpcModuleName);
      lpDllPreloadMain = retlphModule[x];
      lpDllPreloadMain += 0x150C;
      // dumpbin /EXPORTS preload.dll
      // preload at 0x150C
      printf("Returns 1 address of preload.dll preload - lpPreloadMain: 0x%08X\n", lpDllPreloadMain);
      break;
    }
    x++;
  }


  if (lpDllPreloadMain != 0)
  {
    hThreadLaunchPreload = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpDllPreloadMain, NULL, 0, NULL);
    if(hThreadLaunchPreload == NULL) 
    {
      printf("Error: the remote thread could not be created at app_reconfigure_path for preload.dll\n");
      retval = -ENXIO;
      goto exit_crt;
    }

    printf("hThreadLaunchPreload preload = 0x%08X\n", hThreadLaunchPreload);

    printf("wait for hThreadLaunchPreload\n");
    WaitForSingleObject(hThreadLaunchPreload, INFINITE);
    ret = 0;
    GetExitCodeThread(hThreadLaunchPreload, &ret);
    printf("hThreadLaunchPreload returns: 0x%08X\n", ret);
  }
  else
  {
    printf("Error: PreloadMain is NULL\n");
    retval = -ENXIO;
    goto exit_crt;
  }

#if 1
  // Allocate space for app_main.dll
  lpAllocatedAppMainDll = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(lpcAppMainDll), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedAppMainDll == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }

  // write the argument to LoadLibraryExA to the allocated process memory
  n = WriteProcessMemory(hProcess, lpAllocatedAppMainDll, lpcAppMainDll, strlen(lpcAppMainDll), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    retval = -ENXIO;
    goto exit_crt;
  }

  if (0 != lpAllocatedAppMainDll)
  {
    // write path to preload DLL
    hThreadLoadAppMain = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, (LPVOID)lpAllocatedAppMainDll, 0, NULL);
    if(hThreadLoadAppMain == NULL) 
    {
      printf("Error: the remote thread could not be created for kernel32.dll LoadLibraryExA\n");
      retval = -ENXIO;
      goto exit_crt;
    }
    printf("hThreadLoadAppMain thread = 0x%08X\n", hThreadLoadAppMain);

    printf("wait for object\n");
    WaitForSingleObject(hThreadLoadAppMain, INFINITE);
    ret = 0;
    GetExitCodeThread(hThreadLoadAppMain, &ret);
    printf("hThreadLoadAppMain thread returns: 0x%08X\n", ret);
  }
  else
  {
    printf("Error - null AppMainDll\n");
    retval = -ENXIO;
    goto exit_crt;
  }


  // enumerate dlls to check if dll is in list
  if (0 == EnumProcessModules(hProcess, retlphModule, sizeof(retlphModule), &lpNeededBytes))
  {
    printf("Fail enum process modules\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  printf("lpNeededBytes: %d\n", lpNeededBytes);
  printf("allocated bytes: %d\n", sizeof(retlphModule));

  x = 0;
  for (int i = 0; i < lpNeededBytes; i+=sizeof(retlphModule[0]))
  {
    char lpcModuleName[2048] = {0};
    printf("retlphModule[%d]: 0x%08X\n", x, retlphModule[x]);
    //GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    //printf("retlphModule[%d]: %s\n", x, lpcModuleName);

    GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    printf("retlphModule[%d]: %s\n\n", x, lpcModuleName);

    if (0 == strcmp(lpcModuleName, "app_main.dll"))
    {
      printf("found app_main handle at retlphModule[%d]: %s\n\n", x, lpcModuleName);
      lpAppMainAddr = retlphModule[x];
      lpAppMainAddr += 0x1539;
      // dumpbin /EXPORTS app_main.dll
      // app_main at 0x1539
      // app_main@4
      printf("Returns 1 address of app_main.dll app_main - lpAppMainAddr: 0x%08X\n", lpAppMainAddr);
      break;
    }
    x++;
  }

#endif
#if 1
  if (0 != lpAppMainAddr)
  {
    // 10M = 10485760 bytes
    //hThreadLaunchAppMain = CreateRemoteThread(hProcess, NULL, 268435456, (LPTHREAD_START_ROUTINE)lpAppMainAddr, lpAllocatedAppMainDll, 0, NULL);
    hThreadLaunchAppMain = CreateRemoteThread(hProcess, NULL, 536870912, (LPTHREAD_START_ROUTINE)lpAppMainAddr, lpAllocatedAppMainDll, 0, NULL);
    if(hThreadLaunchAppMain == NULL) 
    {
      printf("Error: the remote thread could not be created at app_main for app_main.dll\n");
      retval = -ENXIO;
      goto exit_crt;
    }
    printf("hThreadLaunchAppMain hThreadLaunchAppMain = 0x%08X\n", hThreadLaunchAppMain);

    printf("wait for hThreadLaunchAppMain\n");
    WaitForSingleObject(hThreadLaunchAppMain, INFINITE);
    ret = 0;
    GetExitCodeThread(hThreadLaunchAppMain, &ret);
    printf("hThreadLaunchAppMain returns: 0x%08X\n", ret);
  }
  else
  {
    printf("Error: the remote thread could not be created at app_main for app_main.dll\n");
  }
#endif

  // //CloseHandle(hThreadLaunchAppMain);
  // //CloseHandle(hThreadLoadAppMain);
  // //CloseHandle(hThreadLoadPreload);
  // //CloseHandle(hThreadLaunchPreload);

  printf("Success: the remote thread was successfully created\n");

  //AddDllDirectory
  //printf ("Close handle hProcess: 0x%08X\n", hProcess);
  // Close the handle to the process, becuase we’ve already injected the DLL.

  printf("Waiting for getchar: ");
  getchar();
  CloseHandle(hProcess);
  return retval;

exit_crt:
  printf ("Close handle hProcess: 0x%08X\n", hProcess);
  // Close the handle to the process, becuase we’ve already injected the DLL.
  CloseHandle(hProcess);

  return retval;
}
