#include "launch_chicken.h"
#include <chicken.h>
#include <windows.h>

#include <stdio.h>

// __declspec(dllexport) DWORD WINAPI launch_chicken(LPVOID lpThreadParameter)
__declspec(dllexport) DWORD WINAPI launch_chicken(HMODULE hModule)
{
  char buffer[256];
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

  return 0;
}

//__declspec(dllexport) BOOL WINAPI DllMain(HMODULE hDLL, DWORD dwReason, LPVOID lpReserved) 
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) 
{
  /* open file */
  switch(dwReason) 
  {
    case DLL_PROCESS_ATTACH:
      //printf("proc attach\n");
      // create thread to launch swank
      //CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)app_main, hModule, 0, NULL));
      //CreateThread(0, 0, (LPTHREAD_START_ROUTINE)app_main, hModule, 0, NULL);
      break;
    case DLL_PROCESS_DETACH:
      break;
    case DLL_THREAD_ATTACH:
      break;
    case DLL_THREAD_DETACH:
      break;
    default:
      break;
  }

  return TRUE;
}


