//#include "stdafx.h"
#include <chicken.h>
#include <windows.h>
#include <stdio.h>
//#include <errno.h>
//#include <stdint.h>
//#include <unistd.h>
//#include <pthread.h>
//#include <winbase.h>
#include <psapi.h>        //MODULEINFO
#include <tlhelp32.h>     // PROCESSENTRY32

//typedef DWORD WINAPI (*pAppMain)(HMODULE hModule);
//int get_process(const char *pszWindowTitle, HANDLE *hProcess);
//int inject_dll(HANDLE hProcess, char *pszDllPath);

//extern double baz(int);

HANDLE inject_dll(HANDLE hProcess, char *pszDllPath);
int get_remote_functions(HANDLE hProcess, HMODULE hModule);
uint32_t get_remote_function_addr(HANDLE hProcess, HMODULE hModule, const char *pszSearchedFunctionName);

int main(void) 
{
  HANDLE hDll;
  char* pcLaunchChickenDllPath = "C:\\work\\c\\memscan-dll\\chicken-5.3.0-tests\\test-foreign\\launch_chicken.dll";
  char* pcAppMainDllFunction = "launch_chicken@4"; // name mingling app_main -> app_main@4 (dumpbin /EXPORTS launch_chicken.dll)
  int retval = 0;
  HANDLE hProcess;
  char dummychar;
  DWORD dwProcessId;        // remote process id
  uint32_t pDllFunction;
  //SIZE_T dwStackSize = 0; // use default
  //SIZE_T dwStackSize = 52428800; // 50mb
  //SIZE_T dwStackSize = 314572800; // 300mb
  //SIZE_T dwStackSize = 1048576000; // 1G
  //SIZE_T dwStackSize = 943718400;   // 900m
  //SIZE_T dwStackSize = 734003200;   // 700m
  //SIZE_T dwStackSize = 524288000;   // 500m
  //SIZE_T dwStackSize = 419430400;   // 400m
#if 0
  // print dll module list
  int x = 0;
  DWORD lpNeededBytes;
  HMODULE retlphModule[512] = {0};
#endif

  //const char *pszExeName = "Sacrifice";
  const char *pszExeName = "Darkstone.exe";
  //const char *pszExeName = "dummy-target.exe";
  HANDLE hProcessSnap;
  PROCESSENTRY32 pe32;

  // Take a snapshot of all processes in the system.
  hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
  if (INVALID_HANDLE_VALUE == hProcessSnap) return(FALSE);

  pe32.dwSize = sizeof(PROCESSENTRY32); // <----- IMPORTANT

  // Retrieve information about the first process,
  // and exit if unsuccessful
  if (!Process32First(hProcessSnap, &pe32))
  {
      CloseHandle(hProcessSnap);          // clean the snapshot object
      printf("!!! Failed to gather information on system processes! \n");
      return(0);
  }

  do
  {
      //printf("Checking process %s\n", pe32.szExeFile);
      if (0 == strcmp(pszExeName, pe32.szExeFile))
      {
          dwProcessId = pe32.th32ProcessID;
          break;
      }
  } while (Process32Next(hProcessSnap, &pe32));

  CloseHandle(hProcessSnap);

  if (dwProcessId == 0)
  {
    printf("process not found\n");
    return -ENXIO;
  }
  else
    printf("Found process ID %u\n", (uint32_t)dwProcessId);

  // get process handle
  hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);
  if (hProcess == NULL) 
  {
    printf("Error: the specified process couldn’t be found\n");
    return -ENXIO;
  }

  // NtQuerySystemInformation with SystemExtendedProcessInformation Win32StartAddress
  // HANDLE hThreadSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
  // CreateToolhelp32Snapshot

  // PATH BACK /mingw32/bin:/usr/local/bin:/usr/bin:/bin:/c/Windows/System32:/c/Windows:/c/Windows/System32/Wbem:/c/Windows/System32/WindowsPowerShell/v1.0/:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl
  // PATH NEW /mingw32:/mingw32/bin:/usr/local/bin:/usr/bin:/bin:/c/Windows/System32:/c/Windows:/c/Windows/System32/Wbem:/c/Windows/System32/WindowsPowerShell/v1.0/:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl
  // LD_LIBRARY_PATH=/mingw32

  if ((hDll = inject_dll(hProcess, pcLaunchChickenDllPath)) == NULL)
  {
    printf("DLL inject fails: %d\n", retval);
    retval = -1;
    goto close_exit;
  }
  printf("loaded app_main.dll\n");

  //sleep(2);

  //printf("loaded app_main.dll\n");
  //if (get_remote_functions(hProcess, hDll) != 0)
  //{
  //  printf("Fail to read remote functions\n");
  //}

  if ((pDllFunction = get_remote_function_addr(hProcess, hDll, pcAppMainDllFunction)) == 0)
  {
    printf("Fail to find remote function %s\n", pcAppMainDllFunction);
    goto close_exit;
  }
  printf("address of %s = %08X\n", pcAppMainDllFunction, pDllFunction);

  // call dll function
  CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)pDllFunction, hDll, 0, NULL);
  //CreateRemoteThread(hProcess, 0, dwStackSize, (LPTHREAD_START_ROUTINE)pDllFunction, hDll, 0, NULL);

  //pMain = (pAppMain)GetProcAddress(hDll, "app_main@4");
  //CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)pMain, hDll, 0, NULL));
  //CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)pMain, hDll, 0, NULL);

#if 0
  // print dll module list
  if (0 == EnumProcessModules(hProcess, retlphModule, sizeof(retlphModule), &lpNeededBytes))
  {
    printf("Fail enum process modules\n");
    retval = -1;
    goto close_exit;
  }
  printf("lpNeededBytes = %d\n", (int)lpNeededBytes);
  x = 0;
  for (int i = 0; i < lpNeededBytes; i+=sizeof(retlphModule[0]))
  {
    char lpcModuleName[64] = {0};
    printf("retlphModule[%d]: 0x%08X\n", x, (uint32_t)retlphModule[x]);
    GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    printf("retlphModule[%d]: %s\n", x, lpcModuleName);
    if (strcmp(lpcModuleName, "app_main.dll") == 0)
    {
      printf("found app_main.dll\n");
      if (get_remote_functions(hProcess, retlphModule[x]) != 0)
      {
        printf("Fail to read remote functions\n");
      }
    }
    x++;
  }
#endif

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

close_exit:
  if (hProcess)
    CloseHandle(hProcess);

  return retval;
}

HANDLE inject_dll(HANDLE hProcess, char *pszDllPath)
{
  HANDLE hDll;
  LPVOID lpAllocatedDllPath;
  HANDLE ret;
  int n;
  LPVOID lpLoadLibAddr;
  //SIZE_T dwStackSize = 0; // default
  //SIZE_T dwStackSize = 52428800; // 50mb
  //SIZE_T dwStackSize = 314572800; // 300mb
  //SIZE_T dwStackSize = 1048576000; // 1G
  //SIZE_T dwStackSize = 943718400;   // 900m
  //SIZE_T dwStackSize = 734003200;   // 700m
  //SIZE_T dwStackSize = 524288000;   // 500m
  //SIZE_T dwStackSize = 419430400;   // 400m

  // get addr of load library
  lpLoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
  if(lpLoadLibAddr == NULL) 
  {
    printf("Error: the LoadLibraryExA function was not found inside kernel32.dll library\n");
    return NULL;
  }
  else
  {
    printf("Found address of kernel32 LoadLibraryA: 0x%08X\n", (uint32_t)lpLoadLibAddr);
  }

  // allocate foreign memory for dll path
  lpAllocatedDllPath = (LPVOID)VirtualAllocEx(hProcess, NULL, strlen(pszDllPath), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if(lpAllocatedDllPath == NULL) 
  {
    printf("Error: the memory could not be allocated inside the chosen hProcess\n");
    return NULL;
  }

  // write path to DLL into foreign memory
  n = WriteProcessMemory(hProcess, lpAllocatedDllPath, pszDllPath, strlen(pszDllPath), NULL);
  if(n == 0) 
  {
    printf("Error: no bytes written to address space\n");
    return NULL;
  }

  // create LoadLibraryA thread to load dll at allocated path
  ret = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadLibAddr, lpAllocatedDllPath, 0, NULL);
  if(ret == NULL) 
  {
    printf("Error: the remote thread could not be created\n");
    return NULL;
  }

  printf("waiting for remote thread\n");
  WaitForSingleObject(ret, INFINITE);

  // exit code is retval of LoadLibraryA
  GetExitCodeThread(ret, (DWORD*) &hDll);
  printf("load dll returns addr 0x%08X\n", (uint32_t)hDll);
  printf("thread ret value = 0x%08X\n", (uint32_t)ret);

  return hDll;
}


//MODULEINFO
//{
//  LPVOID lpBaseOfDll;
//  DWORD SizeOfImage;
//  LPVOID EntryPoint;
//};
uint32_t get_remote_function_addr(HANDLE hProcess, HMODULE hModule, const char *pszSearchedFunctionName)
{
	MODULEINFO RemoteModuleInfo = {0};
	UINT_PTR remote_dll_base = 0;
	IMAGE_DOS_HEADER dll_dos_header = {0};
	DWORD dll_nt_signature = 0;
  IMAGE_FILE_HEADER dll_file_header = {0};
  IMAGE_OPTIONAL_HEADER32 dll_opt_header = {0};
	IMAGE_DATA_DIRECTORY dll_export_dir = {0};
	IMAGE_EXPORT_DIRECTORY dll_export_table = {0};
	UINT_PTR dll_export_function_table_addr = 0;
	UINT_PTR dll_export_name_table_addr = 0;
  UINT_PTR dll_export_ordinal_table_addr = 0;
	DWORD *dll_export_function_table = NULL;
	DWORD *dll_export_name_table = NULL;
	DWORD *dll_export_ordinal_table = NULL; // u16 word
  uint32_t retAddr = 0;

	if (!GetModuleInformation(hProcess, hModule,&RemoteModuleInfo, sizeof(RemoteModuleInfo)))
  {
    printf("Fail get module information\n");
		goto dealloc_exit;
  }

	remote_dll_base	= (UINT_PTR)RemoteModuleInfo.lpBaseOfDll;
  printf("remote dll base 0x%08X\n", remote_dll_base);

	// read dos header of dll
	if (!ReadProcessMemory(hProcess, (LPCVOID)remote_dll_base, &dll_dos_header, sizeof(dll_dos_header), NULL) 
      || dll_dos_header.e_magic != IMAGE_DOS_SIGNATURE)
  {
    printf("Fail to get dll dos header\n");
		goto dealloc_exit;
  }
 
	// read NT signature of dll
	if (!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_dos_header.e_lfanew), &dll_nt_signature, sizeof(dll_nt_signature), NULL) || dll_nt_signature != IMAGE_NT_SIGNATURE)
  {
    printf("Fail to get dll nt signature\n");
		goto dealloc_exit;
  }
	
	// read file header of dll
	if (!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_dos_header.e_lfanew + sizeof(dll_nt_signature)), &dll_file_header, sizeof(dll_file_header), NULL))
  {
    printf("Fail to get dll file header\n");
		goto dealloc_exit;
  }
 
  // read optional header of dll and check magic number
  if (!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_dos_header.e_lfanew + sizeof(dll_nt_signature) + sizeof(dll_file_header)), &dll_opt_header, dll_file_header.SizeOfOptionalHeader, NULL)
    || dll_opt_header.Magic != IMAGE_NT_OPTIONAL_HDR32_MAGIC)
  {
    printf("Fail to get dll optional header\n");
    goto dealloc_exit;
  }
 
	// if dll module has an export directory save its address/size
	if (dll_opt_header.NumberOfRvaAndSizes >= IMAGE_DIRECTORY_ENTRY_EXPORT + 1)
	{
		dll_export_dir.VirtualAddress = (dll_opt_header.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT]).VirtualAddress;
		dll_export_dir.Size = (dll_opt_header.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT]).Size;
	}
	else
  {
    printf("invalid dll optional header export\n");
		goto dealloc_exit;
  }

	// Read dll main export table
	if(!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_export_dir.VirtualAddress), &dll_export_table, sizeof(dll_export_table), NULL))
  {
    printf("fail to read export dir\n");
		goto dealloc_exit;
  }

	/* Save the absolute address of the tables so we don't need to keep adding the base address */
	dll_export_function_table_addr = remote_dll_base + dll_export_table.AddressOfFunctions;
	dll_export_name_table_addr = remote_dll_base + dll_export_table.AddressOfNames;
	dll_export_ordinal_table_addr = remote_dll_base + dll_export_table.AddressOfNameOrdinals;
  //printf("remote dll export function table addr 0x%08X\n", dll_export_function_table_addr);
  //printf("remote dll export name table addr 0x%08X\n", dll_export_name_table_addr);
  //printf("remote dll export ordinal table addr 0x%08X\n", dll_export_ordinal_table_addr);
 
	// Allocate memory for tables
	dll_export_function_table	= malloc(sizeof(DWORD) * dll_export_table.NumberOfFunctions);
	dll_export_name_table		= malloc(sizeof(DWORD) * dll_export_table.NumberOfNames);
	dll_export_ordinal_table	= malloc(sizeof(DWORD) * dll_export_table.NumberOfNames);
 
	// Check if the allocation failed
	if (dll_export_function_table == NULL || dll_export_name_table == NULL || dll_export_ordinal_table == NULL)
  {
    printf("Fail to alloc space for tables\n");
		goto dealloc_exit;
  }
 
	// copy function addr table
	if(!ReadProcessMemory(hProcess, (LPCVOID)dll_export_function_table_addr, dll_export_function_table, dll_export_table.NumberOfFunctions * sizeof(DWORD), NULL))
  {
    printf("Fail to copy functions\n");
		goto dealloc_exit;
  }
 
	// copy function name table
	if(!ReadProcessMemory(hProcess, (LPCVOID)dll_export_name_table_addr,
		dll_export_name_table, dll_export_table.NumberOfNames * sizeof(DWORD), NULL))
  {
    printf("Fail to copy names\n");
		goto dealloc_exit;
  }
 
	// copy ordinal table
	if(!ReadProcessMemory(hProcess, (LPCVOID)dll_export_ordinal_table_addr,
		dll_export_ordinal_table, dll_export_table.NumberOfNames * sizeof(WORD), NULL))
  {
    printf("Fail to copy ordinal table\n");
		goto dealloc_exit;
  }

  // print function names
  for (uint32_t i = 0; i < dll_export_table.NumberOfNames; i++)
  {
    char function_name_buff[256];

    for (UINT_PTR j = 0; j < 255; j++)
    {
      if(!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_export_name_table[i] + j),
        &function_name_buff[j], sizeof(char), NULL))
      {
        printf("Fail while reading function name %u character %u from dll\n", i, j);
        goto dealloc_exit;
      }
      //else
      //{
      //  printf("%c", function_name_buff[j]);
      //}

      if (j > 0 && function_name_buff[j] == '\0')
      {
        //printf("function[%u] name: %s\n", i, function_name_buff);
        //printf("function[%u] addr: %08X\n", i, (uint32_t)(remote_dll_base + dll_export_function_table[i]));
        break;
      }
    }

    if (strcmp(function_name_buff, pszSearchedFunctionName) == 0)
    {
      retAddr = (uint32_t)(remote_dll_base + dll_export_function_table[i]);
      //printf("Found function\n");
      //printf("function[%u] name: %s\n", i, function_name_buff);
      //printf("function[%u] addr: %08X\n", i, (uint32_t)(remote_dll_base + dll_export_function_table[i]));

      break;
    }
  }

dealloc_exit:
  if (dll_export_function_table)
    free(dll_export_function_table);
  if (dll_export_name_table)
    free(dll_export_name_table);
  if (dll_export_ordinal_table)
    free(dll_export_ordinal_table);

  return retAddr;
}


//int get_remote_functions(HANDLE hProcess, HMODULE hModule, LPCSTR lpProcName, UINT Ordinal, BOOL UseOrdinal)
int get_remote_functions(HANDLE hProcess, HMODULE hModule)
{
	MODULEINFO RemoteModuleInfo = {0};
	UINT_PTR remote_dll_base = 0;
	IMAGE_DOS_HEADER dll_dos_header = {0};
	DWORD dll_nt_signature = 0;
  IMAGE_FILE_HEADER dll_file_header = {0};
  IMAGE_OPTIONAL_HEADER32 dll_opt_header = {0};
	IMAGE_DATA_DIRECTORY dll_export_dir = {0};
	IMAGE_EXPORT_DIRECTORY dll_export_table = {0};
	UINT_PTR dll_export_function_table_addr = 0;
	UINT_PTR dll_export_name_table_addr = 0;
  UINT_PTR dll_export_ordinal_table_addr = 0;
	DWORD *dll_export_function_table = NULL;
	DWORD *dll_export_name_table = NULL;
	DWORD *dll_export_ordinal_table = NULL; // u16 word

	if (!GetModuleInformation(hProcess, hModule,&RemoteModuleInfo, sizeof(RemoteModuleInfo)))
  {
    printf("Fail get module information\n");
		goto exit_fail;
  }

	remote_dll_base	= (UINT_PTR)RemoteModuleInfo.lpBaseOfDll;
  printf("remote dll base 0x%08X\n", remote_dll_base);

	// read dos header of dll
	if (!ReadProcessMemory(hProcess, (LPCVOID)remote_dll_base, &dll_dos_header, sizeof(dll_dos_header), NULL) 
      || dll_dos_header.e_magic != IMAGE_DOS_SIGNATURE)
  {
    printf("Fail to get dll dos header\n");
		goto exit_fail;
  }
 
	// read NT signature of dll
	if (!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_dos_header.e_lfanew), &dll_nt_signature, sizeof(dll_nt_signature), NULL) || dll_nt_signature != IMAGE_NT_SIGNATURE)
  {
    printf("Fail to get dll nt signature\n");
		goto exit_fail;
  }
	
	// read file header of dll
	if (!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_dos_header.e_lfanew + sizeof(dll_nt_signature)), &dll_file_header, sizeof(dll_file_header), NULL))
  {
    printf("Fail to get dll file header\n");
		goto exit_fail;
  }
 
  // read optional header of dll and check magic number
  if (!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_dos_header.e_lfanew + sizeof(dll_nt_signature) + sizeof(dll_file_header)), &dll_opt_header, dll_file_header.SizeOfOptionalHeader, NULL)
    || dll_opt_header.Magic != IMAGE_NT_OPTIONAL_HDR32_MAGIC)
  {
    printf("Fail to get dll optional header\n");
    goto exit_fail;
  }
 
	// if dll module has an export directory save its address/size
	if (dll_opt_header.NumberOfRvaAndSizes >= IMAGE_DIRECTORY_ENTRY_EXPORT + 1)
	{
		dll_export_dir.VirtualAddress = (dll_opt_header.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT]).VirtualAddress;
		dll_export_dir.Size = (dll_opt_header.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT]).Size;
	}
	else
  {
    printf("invalid dll optional header export\n");
		goto exit_fail;
  }

	// Read dll main export table
	if(!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_export_dir.VirtualAddress), &dll_export_table, sizeof(dll_export_table), NULL))
  {
    printf("fail to read export dir\n");
		goto exit_fail;
  }

	/* Save the absolute address of the tables so we don't need to keep adding the base address */
	dll_export_function_table_addr = remote_dll_base + dll_export_table.AddressOfFunctions;
	dll_export_name_table_addr = remote_dll_base + dll_export_table.AddressOfNames;
	dll_export_ordinal_table_addr = remote_dll_base + dll_export_table.AddressOfNameOrdinals;
  printf("remote dll export function table addr 0x%08X\n", dll_export_function_table_addr);
  printf("remote dll export name table addr 0x%08X\n", dll_export_name_table_addr);
  printf("remote dll export ordinal table addr 0x%08X\n", dll_export_ordinal_table_addr);
 
	// Allocate memory for tables
	dll_export_function_table	= malloc(sizeof(DWORD) * dll_export_table.NumberOfFunctions);
	dll_export_name_table		= malloc(sizeof(DWORD) * dll_export_table.NumberOfNames);
	dll_export_ordinal_table	= malloc(sizeof(DWORD) * dll_export_table.NumberOfNames);
 
	// Check if the allocation failed
	if (dll_export_function_table == NULL || dll_export_name_table == NULL || dll_export_ordinal_table == NULL)
  {
    printf("Fail to alloc space for tables\n");
		goto exit_fail;
  }
 
	// copy function addr table
	if(!ReadProcessMemory(hProcess, (LPCVOID)dll_export_function_table_addr, dll_export_function_table, dll_export_table.NumberOfFunctions * sizeof(DWORD), NULL))
  {
    printf("Fail to copy functions\n");
		goto exit_fail;
  }
 
	// copy function name table
	if(!ReadProcessMemory(hProcess, (LPCVOID)dll_export_name_table_addr,
		dll_export_name_table, dll_export_table.NumberOfNames * sizeof(DWORD), NULL))
  {
    printf("Fail to copy names\n");
		goto exit_fail;
  }
 
	// copy ordinal table
	if(!ReadProcessMemory(hProcess, (LPCVOID)dll_export_ordinal_table_addr,
		dll_export_ordinal_table, dll_export_table.NumberOfNames * sizeof(WORD), NULL))
  {
    printf("Fail to copy ordinal table\n");
		goto exit_fail;
  }

  // print function names
  for (uint32_t i = 0; i < dll_export_table.NumberOfNames; i++)
  {
    char function_name_buff[256];

    for (UINT_PTR j = 0; j < 255; j++)
    {
      if(!ReadProcessMemory(hProcess, (LPCVOID)(remote_dll_base + dll_export_name_table[i] + j),
        &function_name_buff[j], sizeof(char), NULL))
      {
        printf("Fail while reading function name %u character %u from dll\n", i, j);
        goto exit_fail;
      }
      //else
      //{
      //  printf("%c", function_name_buff[j]);
      //}

      if (j > 0 && function_name_buff[j] == '\0')
      {
        printf("function[%u] name: %s\n", i, function_name_buff);
        printf("function[%u] addr: %08X\n", i, (uint32_t)(remote_dll_base + dll_export_function_table[i]));
        break;
      }
    }
  }

  if (dll_export_function_table)
    free(dll_export_function_table);
  if (dll_export_name_table)
    free(dll_export_name_table);
  if (dll_export_ordinal_table)
    free(dll_export_ordinal_table);

  return 0;

exit_fail:
  return -1;
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

