//#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>
#include <winbase.h>

#if 1
typedef void __cdecl (*pAppMain)(void);

void *threadTest(void *pVar)
{
    sleep(1);
    int x[20];
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
      x[i] = i*19;
    }

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
      //printf("Printing %d GeeksQuiz from Thread \n", x[i]);
    }

    return NULL;
}

int main_test(void);

//INT WinMain(struct HINSTANCE__ *hNext, struct HINSTANCE__ *hPrev, CHAR *pCmd, int i)
int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  return main_test();
}

#if 0
int main_test(void) 
{
  //char* pcLibpathEcl = "C:/work/c/dll-test/app_main_no_ecl/ecl.dll";
  // C:\work\c\memscan-dll\ecl-21.2.1-tests\build
  char* pcAppMainDllPath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\app_main.dll";
  char* pcEclBuildDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";
  //LPCWSTR wpcLibDir = L"C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\";
  char cwd[1024];
  //pAppMain pMain;
  LPTHREAD_START_ROUTINE pMain;
  HANDLE hDll;
  int magicNumber = 5132;
  char envVarBuff[8192] = {0};
  char envVarBuff2[8192] = {0};
  pthread_t thread_id[50] = {0};
  pthread_t thread_id2[50] = {0};
  HANDLE newthread = 0;
  FILE *file;
  printf("enter");
  //wprintf(L"using wpcLibDir: %S\n", wpcLibDir);

  //if (getcwd(cwd, sizeof(cwd)) != 0)
  //{
  //  //printf("work dir %s\n", cwd);
  //}
  //else
  //{
  //  //printf("fail\n");
  //}

  GetEnvironmentVariable("PATH", envVarBuff, sizeof(envVarBuff));
  strcpy(envVarBuff2, pcEclBuildDir);
  strcpy(&envVarBuff2[strlen(pcEclBuildDir)], envVarBuff);
  //printf("new PATH: %s\n", envVarBuff2);
  SetEnvironmentVariable("PATH", envVarBuff2);

  if ((hDll = LoadLibraryA(pcAppMainDllPath)) == 0)
  {
    printf("load library returns null\n");
    return -1;
  }

  /*GetProcAddress*/
  //pMain = (pAppMain)GetProcAddress(hDll, "app_main");
  //pMain = (LPTHREAD_START_ROUTINE)GetProcAddress(hDll, "app_main");
  pMain = (LPTHREAD_START_ROUTINE)GetProcAddress(hDll, "app_main@4");
  if (pMain == NULL)
  {
    // dumpbin /EXPORTS app_main.dll
    printf("fail - null pointer fn\n");
    return -1;
  }

  /*Call the function*/
  //printf("magicNumber = %d\n",magicNumber);
  //printf("&magicNumber = %08x\n",(uint32_t)&magicNumber);

  // create threads
  for (int i = 0; i < sizeof(thread_id)/sizeof(thread_id[0]); i++)
  {
    pthread_create(&thread_id[i], NULL, threadTest, NULL);
  }

  //pMain();
  //newthread = CreateThread(0, 0, pMain, NULL, 0, NULL);

  // create more threads
  for (int i = 0; i < sizeof(thread_id2)/sizeof(thread_id2[0]); i++)
  {
    pthread_create(&thread_id2[i], NULL, threadTest, NULL);
  }

  for (int i = 0; i < sizeof(thread_id)/sizeof(thread_id[0]); i++)
  {
    pthread_join(thread_id[i], NULL);
  }

  for (int i = 0; i < sizeof(thread_id2)/sizeof(thread_id2[0]); i++)
  {
    pthread_join(thread_id2[i], NULL);
  }

  printf("exit");
  //file = fopen("C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\inject-status.txt", "a+");
  file = fopen("inject-status2.txt", "a+");
  fprintf(file, "exit\n");
  if (file != NULL)
    fclose(file);

  getchar();

  return 0;
}
#else
int main_test(void) 
{
  char* pcLoadAppMainDllPath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\load_app_main.dll";
  char* pcAppMainDllPath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\app_main.dll";
  char* pcEclBuildDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";
  const char *pszWindowTitle = "DarkStone DSI";
  //const char *pszWindowTitle = "dummy-target";
  LPTHREAD_START_ROUTINE pMain;
  HANDLE newthread = 0;
  FILE *file;
  LPVOID lpLoadLibAddr;
  LPVOID lpAllocatedDllPath;
  LPVOID lpAllocatedDllPath2;
  HWND hWindow;
  int retval;
  DWORD ret;
  DWORD dwProcessId;        // remote process id
  HANDLE hProcess;          //
  int n;
  HANDLE hThreadLaunchPreload = 0;
  SIZE_T dwStackSize = 52428800; // 50mb
  //SIZE_T dwStackSize = 314572800; // 300mb
  //SIZE_T dwStackSize = 1048576000; // 1G
  //SIZE_T dwStackSize = 943718400;   // 900m
  //SIZE_T dwStackSize = 734003200;   // 700m
  //SIZE_T dwStackSize = 524288000;   // 500m
  //SIZE_T dwStackSize = 419430400;   // 400m
  
  printf("enter\n");

  ////GetEnvironmentVariable("PATH", envVarBuff, sizeof(envVarBuff));
  ////strcpy(envVarBuff2, pcEclBuildDir);
  ////strcpy(&envVarBuff2[strlen(pcEclBuildDir)], envVarBuff);
  //////printf("new PATH: %s\n", envVarBuff2);
  ////SetEnvironmentVariable("PATH", envVarBuff2);

  //if ((hDll = LoadLibraryA(pcAppMainDllPath)) == 0)
  //{
  //  printf("load library returns null\n");
  //  return -1;
  //}
  // find kernel32.LoadLibraryExA
  lpLoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
  if(lpLoadLibAddr == NULL) 
  {
    printf("Error: the LoadLibraryExA function was not found inside kernel32.dll library\n");
    //CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("Found address of kernel32 LoadLibraryA: 0x%08X\n", lpLoadLibAddr);
  }

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

  // Allocate memory inside the target process address space.
  lpAllocatedDllPath = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(pcLoadAppMainDllPath), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedDllPath == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }

  // write path to preload DLL
  n = WriteProcessMemory(hProcess, lpAllocatedDllPath, pcLoadAppMainDllPath, strlen(pcLoadAppMainDllPath), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    retval = -ENXIO;
    goto exit_crt;
  }

  // load dll
  printf("create remote thread\n");
  hThreadLaunchPreload = CreateRemoteThread(hProcess, NULL, dwStackSize, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, lpAllocatedDllPath, 0, NULL);
  if(hThreadLaunchPreload == NULL) 
  {
    printf("Error: the remote thread could not be created at app_reconfigure_path for preload.dll\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  WaitForSingleObject(hThreadLaunchPreload, INFINITE);
  ret = 0;
  GetExitCodeThread(hThreadLaunchPreload, &ret);
  printf("load_app_main.dll returns: 0x%08X\n", ret);
  sleep(1);

  char *pPathLoadAppSetPathFile = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\load_app_addr";
  FILE *pLoadAppSetPathFile = fopen(pPathLoadAppSetPathFile, "rb");
  LPVOID lpLoadAppMain;
  if (0 == pLoadAppSetPathFile)
  {
    printf("Fail to open addr file\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  if (0 == fread(&lpLoadAppMain, sizeof(lpLoadAppMain), 1, pLoadAppSetPathFile))
  {
    printf("Fail to read addr\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  fclose(pLoadAppSetPathFile);
  if (0 == lpLoadAppMain)
  {
    printf("Read bad addr\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("load_app_set_path at 0x%08X\n", lpLoadAppMain);
  }

  printf("loaded load_app_main.dll\n");
  //n = getchar();

  hThreadLaunchPreload = CreateRemoteThread(hProcess, NULL, dwStackSize, (LPTHREAD_START_ROUTINE)lpLoadAppMain, NULL, 0, NULL);
  if(hThreadLaunchPreload == NULL) 
  {
    printf("Error: the remote thread could not be loaded for lpLoadAppMain\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  WaitForSingleObject(hThreadLaunchPreload, INFINITE);
  ret = 0;
  GetExitCodeThread(hThreadLaunchPreload, &ret);
  printf("load_app_main.dll - load_app_set_path returns: 0x%08X\n", ret);
  sleep(1);

  // load second dll
  // Allocate memory inside the target process address space.
  lpAllocatedDllPath2 = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(pcAppMainDllPath), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedDllPath2 == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    CloseHandle(hProcess);
    retval = -ENXIO;
    goto exit_crt;
  }

  // write path to preload DLL
  n = WriteProcessMemory(hProcess, lpAllocatedDllPath2, pcAppMainDllPath, strlen(pcAppMainDllPath), NULL);
  if(n == 0) 
  {
    printf("Error: there was no bytes written to the process’s address space.n");
    retval = -ENXIO;
    goto exit_crt;
  }

  printf("successfully set PATH\n");
  //n = getchar();

  // start thread
  hThreadLaunchPreload = CreateRemoteThread(hProcess, NULL, dwStackSize, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, lpAllocatedDllPath2, 0, NULL);
  if(hThreadLaunchPreload == NULL) 
  {
    printf("Error: the remote thread could not be created at app_reconfigure_path for preload.dll\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  WaitForSingleObject(hThreadLaunchPreload, INFINITE);
  ret = 0;
  GetExitCodeThread(hThreadLaunchPreload, &ret);
  printf("app_main.dll returns: 0x%08X\n", ret);

  LPVOID lpLaunchSwank;
  char *pLaunchSwankAddrDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\launch_swank_addr";
  FILE *pLaunchSwankAddr = fopen(pLaunchSwankAddrDir, "rb");
  if (0 == pLaunchSwankAddr)
  {
    printf("Fail to open pLaunchSwankAddr addr file\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  if (0 == fread(&lpLaunchSwank, sizeof(lpLaunchSwank), 1, pLaunchSwankAddr))
  {
    printf("Fail to read addr\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  fclose(pLaunchSwankAddr);
  if (0 == lpLaunchSwank)
  {
    printf("Read bad addr\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  else
  {
    printf("launch_swank_addr at 0x%08X\n", lpLaunchSwank);
  }

  printf("successfully loaded app_main.dll\n");
  //n = getchar();

  // start thread
  hThreadLaunchPreload = CreateRemoteThread(hProcess, NULL, dwStackSize, (LPTHREAD_START_ROUTINE)lpLaunchSwank, NULL, 0, NULL);
  if(hThreadLaunchPreload == NULL) 
  {
    printf("Error: the remote thread could not be created for launch swank\n");
    retval = -ENXIO;
    goto exit_crt;
  }
  //WaitForSingleObject(hThreadLaunchPreload, INFINITE);
  //ret = 0;
  //GetExitCodeThread(hThreadLaunchPreload, &ret);
  //printf("load dll 2 returns: 0x%08X\n", ret);

  //// get app main addr
  //pMain = (LPTHREAD_START_ROUTINE)GetProcAddress(hDll, "app_main@4");
  //if (pMain == NULL)
  //{
  //  // dumpbin /EXPORTS app_main.dll
  //  printf("fail - null pointer fn\n");
  //  return -1;
  //}

  /*Call the function*/
  printf("exit");

  //file = fopen("C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\inject-status.txt", "a+");
  file = fopen("inject-status2.txt", "w+");
  fprintf(file, "exit\n");
  if (file != NULL)
    fclose(file);

  getchar();

  return 0;

exit_crt:
  CloseHandle(hProcess);
  return retval;
}
#endif
  //LoadLibraryA(pcLibpathEcl);
  //hDll = LoadLibraryA(pcLibpath);
//  if (0 == SetDefaultDllDirectories(LOAD_LIBRARY_SEARCH_DEFAULT_DIRS | LOAD_LIBRARY_SEARCH_APPLICATION_DIR | LOAD_LIBRARY_SEARCH_SYSTEM32 | LOAD_LIBRARY_SEARCH_USER_DIRS))
//  {
//    printf("fail - return 0 for default dll dirs\n");
//    return -1;
//  }
//  
//  //if (0 == AddDllDirectory(pcEclBuildDir))
//  if (0 == AddDllDirectory(wpcLibDir))
//  {
//    printf("fail - return 0 for add dll dir\n");
//    return -1;
//  }
  //SetEnvironmentVariable("PATH", envVarBuff2);
  
  //if ((hDll = LoadLibraryA(pcLibpath)) == 0)
  //LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR
  //if ((hDll = LoadLibraryExA(pcLibpath, NULL, LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS)) == 0)

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

