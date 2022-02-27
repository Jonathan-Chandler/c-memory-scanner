#include <windows.h>
#include <psapi.h>
#include <stdint.h>

#include <stdio.h>

#define WINDOW_TITLE_BUF_SIZE 1024
int main(void)
{
  char dummy;
  LPVOID lpLoadLibAddr;
  HANDLE hProcess;
  HMODULE retlphModule[4096] = {0};
  DWORD lpNeededBytes;
  int x = 0;
  //HWND hCurrentWindow;
  //char pszOldWindowTitle[WINDOW_TITLE_BUF_SIZE]; 

  //hCurrentWindow = GetActiveWindow();
  //GetConsoleTitle(pszOldWindowTitle, MY_BUFSIZE);
  SetConsoleTitle("dummy-target");

//  if (hCurrentWindow == 0)
//  {
//    printf("Fail to get current handle\n");
//  }
//  else
//  {
//    SetWindowTextA(hCurrentWindow, "dummy-target");
//  }

  // keep window open
  printf("Dummy waiting for getchar: ");
  dummy = getchar();

  // get handle to this process
  hProcess = GetCurrentProcess();
  if (0 == EnumProcessModules(hProcess, retlphModule, sizeof(retlphModule), &lpNeededBytes))
  {
    printf("Fail enum process modules\n");
  }

  printf("lpNeededBytes = %d\n", (int)lpNeededBytes);
  x = 0;
  //for (int i = 0; i <= lpNeededBytes; i+=sizeof(retlphModule[0]))
  for (int i = 0; i < lpNeededBytes; i+=sizeof(retlphModule[0]))
  {
    char lpcModuleName[2048] = {0};
    printf("retlphModule[%d]: 0x%08X\n", x, (uint32_t)retlphModule[x]);
    GetModuleBaseNameA(hProcess, retlphModule[x], lpcModuleName, sizeof(lpcModuleName));
    printf("retlphModule[%d]: %s\n", x, lpcModuleName);
    x++;
  }

  lpLoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandle("app_main.dll"), "app_main");
  if(lpLoadLibAddr == NULL) 
  {
    printf("Error: the app_main function was not found inside app_main.dll library\n");
  }
  else
  {
    printf("Found address of app_main.dll app_main: 0x%08X\n", (uint32_t)lpLoadLibAddr);
  }

  printf("Dummy waiting for getchar2: ");

  while (true)
  {
    sleep 5;
  }

  // pretend to use the char
  if (dummy == 0xFF)
  {
    printf("0xFF");
  }

  return 0;
}
