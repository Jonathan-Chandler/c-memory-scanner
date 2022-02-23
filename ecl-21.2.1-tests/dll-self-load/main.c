//#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>

#if 1
typedef int (*pAppMain)();

int main(void) 
{
  //char* pcLibpathEcl = "C:/work/c/dll-test/app_main_no_ecl/ecl.dll";
  // C:\work\c\memscan-dll\ecl-21.2.1-tests\build
  char* pcLibpath = "C:/work/c/memscan-dll/ecl-21.2.1-tests/build/app_main.dll";
  char* pcLibDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";
  //char* pcLibpath = "/c/work/c/memscan-dll/ecl-21.2.1-tests/dll-self-load/app_main.dll";
  //char* pcLibDir = "C:/work/c/memscan-dll/ecl-21.2.1-tests/build/";
  LPCWSTR wpcLibDir = L"C:/work/c/memscan-dll/ecl-21.2.1-tests/build/";
  char cwd[1024];
  pAppMain pMain;
  HANDLE hDll;
  int magicNumber = 5132;
  char envVarBuff[8192] = {0};
  char envVarBuff2[8192] = {0};
  wprintf(L"using wpcLibDir: %S\n", wpcLibDir);

  if (getcwd(cwd, sizeof(cwd)) != 0)
  {
    printf("work dir %s\n", cwd);
  }
  else
  {
    printf("fail\n");
  }

  //LoadLibraryA(pcLibpathEcl);
  //hDll = LoadLibraryA(pcLibpath);
//  if (0 == SetDefaultDllDirectories(LOAD_LIBRARY_SEARCH_DEFAULT_DIRS | LOAD_LIBRARY_SEARCH_APPLICATION_DIR | LOAD_LIBRARY_SEARCH_SYSTEM32 | LOAD_LIBRARY_SEARCH_USER_DIRS))
//  {
//    printf("fail - return 0 for default dll dirs\n");
//    return -1;
//  }
//  
//  //if (0 == AddDllDirectory(pcLibDir))
//  if (0 == AddDllDirectory(wpcLibDir))
//  {
//    printf("fail - return 0 for add dll dir\n");
//    return -1;
//  }

  GetEnvironmentVariable("PATH", envVarBuff, sizeof(envVarBuff));
  printf("PATH: %s\n", envVarBuff);
  //strcpy();
  printf("PATH: %s\n", pcLibDir);
  strcpy(envVarBuff2, pcLibDir);
  strcpy(&envVarBuff2[strlen(pcLibDir)], envVarBuff);
  printf("new PATH: %s\n", envVarBuff2);
  SetEnvironmentVariable("PATH", envVarBuff2);

  //SetEnvironmentVariable("PATH", envVarBuff2);
  
  //if ((hDll = LoadLibraryA(pcLibpath)) == 0)
  //LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR
  //if ((hDll = LoadLibraryExA(pcLibpath, NULL, LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS)) == 0)
  if ((hDll = LoadLibraryA(pcLibpath)) == 0)
  {
    printf("load library returns null\n");
    getchar();
    return -1;
  }

  /*GetProcAddress*/
  pMain = (pAppMain)GetProcAddress(hDll, "app_main");
  if (pMain == NULL)
  {
    printf("fail - null pointer fn\n");
    getchar();
    return -1;
  }
  
  /*Call the function*/
  printf("magicNumber = %d\n",magicNumber);
  printf("&magicNumber = %08x\n",(uint32_t)&magicNumber);
  pMain();
  getchar();
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
