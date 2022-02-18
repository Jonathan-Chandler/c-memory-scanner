//#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include "app_main.h"

#if 1

//ADD_APP_MAIN_API int ADD_APP_MAIN_CALL app_main();

int main(void) 
{
  app_main();
  return 0;
}
#else
int main(void) 
{
  //char* buffer = "C:/work/c/dll-test/dllmain.dll";
  char* buffer = "C:/work/c/dll-test/app_main.dll";
  const char *pszWindowTitle = "DarkStone DSI";
  DWORD dwProcessId;
  HANDLE hProcess;
  LPVOID lpLoadLibAddr;
  LPVOID lpAllocatedMemory;
  HWND hWindow;

  hWindow = FindWindow(0, pszWindowTitle);
  if (hWindow == 0)
  {
    printf("%s window not found\n", pszWindowTitle);
    return -EINVAL;
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

  // find kernel32.LoadLibraryA
  lpLoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
  if(lpLoadLibAddr == NULL) 
  {
    printf("Error: the LoadLibraryA function was not found inside kernel32.dll library\n");
    return -ENXIO;
  }

  // Allocate memory inside the target process address space.
  lpAllocatedMemory = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(buffer), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedMemory == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    return -ENXIO;
  }

  // write the argument to LoadLibraryA to the allocated process memory
  int n = WriteProcessMemory(hProcess, lpAllocatedMemory, buffer, strlen(buffer), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    return -ENXIO;
  }

  // Inject our DLL into the process’s address space.
  HANDLE threadID = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, lpAllocatedMemory, 0, NULL);
  if(threadID == NULL) 
  {
    printf("Error: the remote thread could not be created\n");
    return -ENXIO;
  }
  else 
  {
    printf("Success: the remote thread was successfully created\n");
  }

  //AddDllDirectory


  getchar();
  // Close the handle to the process, becuase we’ve already injected the DLL.
  CloseHandle(hProcess);

  return 0;
}
#endif
