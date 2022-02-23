//#include "stdafx.h"
#include <windows.h>
#include <psapi.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>

#if 0
typedef int (*pAppMain)();

int main(void) 
{
  //char* pcLibpathEcl = "C:/work/c/dll-test/app_main_no_ecl/ecl.dll";
  char* pcLibpath = "C:/work/c/memscan-dll/ecl-21.2.1-tests/build/app_main.dll";
  char cwd[1024];
  pAppMain pMain;
  HANDLE hDll;
  int magicNumber = 5132;
  DWORD dwLastError;

  if (getcwd(cwd, sizeof(cwd)) != 0)
  {
    printf("work dir %s\n", cwd);
  }
  else
  {
    printf("fail\n");
  }

  // LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS
  // search dir dll was loaded from | search application dir/system32/user dirs
  // LOAD_LIBRARY_SEARCH_USER_DIRS - search dirs from Set/AddDllDirectory
  //LoadLibraryA(pcLibpathEcl);
  //LoadLibraryExA
  //  [in] LPCSTR lpLibFileName,
  //   HANDLE hFile,
  //  [in] DWORD  dwFlags
  //hDll = LoadLibraryA(pcLibpath);
  // 
  //hDll = LoadLibraryA(pcLibpath);
  //hDll = LoadLibraryExA(pcLibpath, NULL, LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
  hDll = LoadLibraryExA(pcLibpath, NULL, 0);
  if (hDll == NULL)
  {
    dwLastError = GetLastError();
    printf("Failed to load library: %d\n", dwLastError);
    HRESULT_FROM_WIN32(dwLastError);
    return -1;
  }

  /*GetProcAddress*/
  pMain = (pAppMain)GetProcAddress(hDll, "app_main");
  
  /*Call the function*/
  printf("magicNumber = %d\n",magicNumber);
  printf("&magicNumber = %08x\n",(uint32_t)&magicNumber);
  pMain();
  getchar();
  return 0;
}
#else
#pragma pack(push,1)
typedef struct tagLoadLibraryExAParams
{
  LPCSTR lpLibFileName;   // pointer to string pointer
  HANDLE hFile;           // must be NULL
  DWORD  dwFlags;         // bitmap of flags
} LoadLibraryExAParams, *pLoadLibraryExAParams;
#pragma pack(pop)

#pragma pack(push,1)
struct actualData
{
  LPCSTR lpLibFileName;   // pointer to string pointer
  HANDLE hFile;           // must be NULL
  DWORD  dwFlags;         // bitmap of flags
};
#pragma pack(pop)

DWORD WINAPI MyThreadProc(LPVOID lpParameter)
{
    INT *x = (INT*) lpParameter;
    // use *x as needed...
    VirtualFree(x, 0, MEM_RELEASE);
    return 0;
}

int main(void) 
{
  const char *pszWindowTitle = "dummy-target";
  DWORD dwProcessId;
  HANDLE hProcess;

  // addresses of functions LoadLibraryExA and AddDllDirectory
  LPVOID lpLoadLibAddr;
  LPVOID lpLoadLibExAAddr;
  LPVOID lpAddDllDirectoryAddr;

  // addresses in foreign address that these paths are copied to
  char* lpcDllDirectory = "C:/work/c/memscan-dll/ecl-21.2.1-tests/build/";
  char* lpcAppMainDll = "C:/work/c/memscan-dll/ecl-21.2.1-tests/build/app_main.dll";
  LPVOID lpAllocatedDllDir;
  LPVOID lpAllocatedAppMainDll;

  LPVOID lpAllocatedLoadLibraryExAPameters;

  HWND hWindow;
  LPVOID lpAppMainAddr = 0;
  int retval = 0;
  DWORD ret = 0;
  HMODULE retlphModule[4096] = {0};
  DWORD lpNeededBytes = 1;
  int x;
  int n;
  HANDLE threadID = 0;
  HANDLE threadID2 = 0;
  LoadLibraryExAParams sLoadLibraryExAParameters;


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

  // find kernel32.LoadLibraryExA
  lpLoadLibExAAddr = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryExA");
  if(lpLoadLibExAAddr == NULL) 
  {
    printf("Error: the LoadLibraryExA function was not found inside kernel32.dll library\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("Found address of kernel32 LoadLibraryExA: 0x%08X\n", lpLoadLibExAAddr);
  }

  // find kernel32.AddDllDirectory
  lpAddDllDirectoryAddr = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "AddDllDirectory");
  if(lpAddDllDirectoryAddr == NULL) 
  {
    printf("Error: the AddDllDirectory function was not found inside kernel32.dll library\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("Found address of kernel32 AddDllDirectory: 0x%08X\n", lpAddDllDirectoryAddr);
  }

  // Allocate memory inside the target process address space.
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

  // Allocate memory for DLL path inside target process
  lpAllocatedDllDir = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(lpcDllDirectory), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedDllDir == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }

  // write the argument to LoadLibraryExA to the allocated process memory
  n = WriteProcessMemory(hProcess, lpAllocatedDllDir, lpcDllDirectory, strlen(lpcDllDirectory), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    retval = -ENXIO;
    goto exit_crt;
  }

  // Allocate memory for struct to hold parameters for LoadLibraryExA
  sLoadLibraryExAParameters.lpLibFileName = lpAllocatedAppMainDll;
  sLoadLibraryExAParameters.hFile = NULL;
  sLoadLibraryExAParameters.dwFlags = 0;
  printf("sizeof sloadLibraryexaparam = %d", sizeof(sLoadLibraryExAParameters));

  // Allocate memory for DLL path inside target process
  lpAllocatedLoadLibraryExAPameters = (LPVOID)VirtualAllocEx(hProcess, NULL, sizeof(sLoadLibraryExAParameters), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedLoadLibraryExAPameters == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }
  // write the arguments to LoadLibraryExA to the allocated process memory
  n = WriteProcessMemory(hProcess, lpAllocatedLoadLibraryExAPameters, &sLoadLibraryExAParameters, sizeof(sLoadLibraryExAParameters), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    retval = -ENXIO;
    goto exit_crt;
  }

#if 0
  // AddDllDirectoryA(lpAllocatedDllDir);
  threadID = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpAddDllDirectoryAddr, lpAllocatedDllDir, 0, NULL);
  if(threadID == NULL) 
  {
    printf("Error: the remote thread could not be created for kernel32.dll AddDllDirectoryA\n");
    retval = -ENXIO;
    goto exit_crt;
  }

  printf("wait for object\n");
  WaitForSingleObject(threadID, INFINITE);
  ret = 0;
  GetExitCodeThread(threadID, &ret);
  printf("thread returns: 0x%08X\n", ret);
#endif

  // inject dll to launch swank
  //lpcAppMainDll
  // 
  //threadID = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, lpAllocatedLoadLibraryExAPameters, 0, NULL);
    
  //threadID = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, lpAllocatedAppMainDll, 0, NULL);

//  MyThreadData *params = 
//    static_cast<MyThreadData*>(
//        VirtualAllocEx(hProcess, NULL, sizeof(MyThreadData) + fooNumBytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE));

#if 0
  int nDllStringLen = strlen(lpcAppMainDll) + 1;
  HANDLE hFile = NULL;
  DWORD  dwFlags = 0;

  LoadLibraryExAParams *pLoadLibraryExAParameters = 
    VirtualAllocEx(hProcess, NULL, sizeof(LoadLibraryExAParams) + nDllStringLen, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

  n = WriteProcessMemory(hProcess, &(pLoadLibraryExAParameters->hFile), &hFile, sizeof(hFile), NULL);
  if (n == 0)
  {
    printf("Fail to write hfile\n");
  }

  n = WriteProcessMemory(hProcess, &(pLoadLibraryExAParameters->dwFlags), &dwFlags, sizeof(dwFlags), NULL);
  if (n == 0)
  {
    printf("Fail to write dwFlags\n");
  }

  LPCSTR lpLibFileName_data_addr = (LPCSTR)(pLoadLibraryExAParameters + 1);
  // write pointer
  n = WriteProcessMemory(hProcess, &(pLoadLibraryExAParameters->lpLibFileName), &lpLibFileName_data_addr, sizeof(lpLibFileName_data_addr), NULL);
  if (n == 0)
  {
    printf("Fail to write file name pointer\n");
  }
  // write data
  n = WriteProcessMemory(hProcess, (LPVOID)lpLibFileName_data_addr, lpcAppMainDll, nDllStringLen, NULL);
  if (n == 0)
  {
    printf("Fail to write file name\n");
  }

  char readBuff[1024] = {0};
  LoadLibraryExAParams *test_param = (LoadLibraryExAParams*)readBuff;

  n = ReadProcessMemory(hProcess, (LPVOID)pLoadLibraryExAParameters, readBuff, sizeof(LoadLibraryExAParams)+1+nDllStringLen, NULL);
  if (n == 0)
  {
    printf("Fail to write file name\n");
  }
  
  printf("pLoadLibraryExAParameters = 0x%08X\n", pLoadLibraryExAParameters);
  printf("readback hFile = %d\n", test_param->hFile);
  printf("readback dwFlags = %d\n", test_param->dwFlags);
  printf("readback pointer = 0x%08X\n", test_param->lpLibFileName);
  printf("read data: %s\n", &test_param[1]);
#endif


  //threadID = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibExAAddr, (LPVOID)*pLoadLibraryExAParameters, 0, NULL);
  CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibExAAddr, (LPVOID)*pLoadLibraryExAParameters, 0, NULL);
  if(threadID == NULL) 
  {
    printf("Error: the remote thread could not be created for kernel32.dll LoadLibraryExA\n");
    retval = -ENXIO;
    goto exit_crt;
  }

  printf("wait for object\n");
  WaitForSingleObject(threadID, INFINITE);
  ret = 0;
  GetExitCodeThread(threadID, &ret);
  printf("thread returns: 0x%08X\n", ret);

  // enumerate dlls to check if dll is in list
  if (0 == EnumProcessModules(hProcess, retlphModule, sizeof(retlphModule), &lpNeededBytes))
  {
    printf("Fail enum process modules\n");
  }

  printf("lpNeededBytes = %d\n", lpNeededBytes);
  printf("size for each = %d\n", sizeof(retlphModule[0]));
  x = 0;
  //for (int i = 0; i <= lpNeededBytes; i+=sizeof(retlphModule[0]))
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
      printf("Returns 1 address of app_main.dll app_main - lpAppMainAddr: 0x%08X\n", lpAppMainAddr);
    }
    x++;
  }

  if (0 != lpAppMainAddr)
  {
    threadID2 = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpAppMainAddr, NULL, 0, NULL);
    if(threadID == NULL) 
    {
      printf("Error: the remote thread could not be created at app_main for app_main.dll\n");
      retval = -ENXIO;
      goto exit_crt;
    }

    printf("wait for thread2\n");
    WaitForSingleObject(threadID2, INFINITE);
    ret = 0;
    GetExitCodeThread(threadID, &ret);
    printf("thread2 returns: 0x%08X\n", ret);
  }
  else
  {
    printf("Error: the remote thread could not be created at app_main for app_main.dll\n");
  }


//  DWORD GetModuleBaseNameA(
//  [in]           HANDLE  hProcess,
//  [in, optional] HMODULE hModule,
//  [out]          LPSTR   lpBaseName,
//  [in]           DWORD   nSize
//);


  lpAppMainAddr = (LPVOID)GetProcAddress(GetModuleHandle("app_main.dll"), "app_main");
  printf("Returns address of app_main.dll app_main - lpAppMainAddr: 0x%08X\n", lpAppMainAddr);

  CloseHandle(threadID);


  //pMain = (pAppMain)GetProcAddress(hDll, "app_main");

#if 0
  //// write address for app_main.dll
  // find app_main.dll
  //lpLoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandle("app_main.dll"), "app_main");
  //lpAppMainAddr = (LPVOID)GetProcAddress(GetModuleHandle("C:/work/c/memscan-dll/ecl-21.2.1-tests/build/app_main.dll"), "app_main");
  lpAppMainAddr = (LPVOID)GetProcAddress(GetModuleHandle("app_main.dll"), "app_main");
  if(lpAppMainAddr == NULL) 
  {
    printf("Error: the app_main function was not found inside app_main.dll library\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("Found address of app_main.dll app_main - lpAppMainAddr: 0x%08X\n", lpAppMainAddr);
  }

  // start thread with swank server
  threadID = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpAppMainAddr, NULL, 0, NULL);
  if(threadID == NULL) 
  {
    printf("Error: the remote thread could not be created for app_main\n");
    retval = -ENXIO;
    goto exit_crt;
  }
#endif

  printf("Success: the remote thread was successfully created\n");

  //AddDllDirectory
  printf ("Close handle hProcess: 0x%08X\n", hProcess);
  // Close the handle to the process, becuase we’ve already injected the DLL.

  printf("Waiting for getchar: ");
  getchar();
  //CloseHandle(hProcess);
  return retval;

exit_crt:
  printf ("Close handle hProcess: 0x%08X\n", hProcess);
  // Close the handle to the process, becuase we’ve already injected the DLL.
  CloseHandle(hProcess);

  return retval;
}
#endif
