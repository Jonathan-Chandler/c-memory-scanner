#include "load_app_main.h"
#include <stdio.h>
#include <stdint.h>

//static long unsigned int __stdcall load_app_set_path(void *pvoid)
__declspec(dllexport) long unsigned int __stdcall load_app_set_path(void *pvoid)
{
  FILE *resultFile;
  char* pcEclBuildDir = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\build\\;";
  char *resultFilePath = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\setPathRes.txt";
  char envVarBuff[2048] = {0};
  char envVarBuff2[2048] = {0};
  printf("in load_app_set_path\n");

  // insert ECL.dll dir at beginning of PATH
  GetEnvironmentVariable("PATH", envVarBuff, sizeof(envVarBuff));
  strcpy(envVarBuff2, pcEclBuildDir);
  strcpy(&envVarBuff2[strlen(pcEclBuildDir)], envVarBuff);
  //printf("new PATH: %s\n", envVarBuff2);
  SetEnvironmentVariable("PATH", envVarBuff2);

  // write result
  resultFile = fopen(resultFilePath, "a+");
  if (resultFile != NULL)
  {
    fprintf(resultFile, "Added PATH %s\n", envVarBuff2);
    fclose(resultFile);
  }

  return 0;
}

BOOL ADD_APP_MAIN_API WINAPI DllMain(HMODULE hDLL, DWORD dwReason, LPVOID lpReserved) 
{
  /* open file */
  LPVOID lpSetPath;
#if 1
  FILE *pLoadAppSetPathFile;
  char *pPathLoadAppSetPathFile = "C:\\work\\c\\memscan-dll\\ecl-21.2.1-tests\\multithreaded-attach-test\\load_app_addr";
#else
  HANDLE hThread;
#endif
  

  switch(dwReason) 
  {
    case DLL_PROCESS_ATTACH:
      //lpSetPath = (LPVOID)GetProcAddress(GetModuleHandle("load_app_main.dll"), "load_app_set_path");
#if 1
      lpSetPath = (LPVOID)GetProcAddress(hDLL, "load_app_set_path@4");
      printf("get lp set path addr 0x%08X", (uint32_t)lpSetPath);
      pLoadAppSetPathFile = fopen(pPathLoadAppSetPathFile, "wb+");
      if (pLoadAppSetPathFile != NULL)
      {
        //fwrite(pLoadAppSetPathFile, "%08X", (uint32_t)lpSetPath);
        fwrite(&lpSetPath, sizeof(lpSetPath), 1, pLoadAppSetPathFile);
        fclose(pLoadAppSetPathFile);
      }
      else
      {
        printf("Fail to write addr load app set path\n");
      }
#else
      lpSetPath = (LPVOID)GetProcAddress(GetModuleHandle("load_app_main.dll"), "load_app_set_path@4");
      if (lpSetPath != NULL)
      {
        // dumpbin /EXPORTS load_app_main.dll
        // load_app_set_path@4
        printf("launch set_path thread at address 0x%08X\n", (uint32_t)lpSetPath);
        // open thread to set PATH for host
        hThread = CreateThread(NULL, 0, lpSetPath, NULL, 0, NULL);
        printf("waiting for ret\n");
        // wait and then close handle
        WaitForSingleObject(hThread, INFINITE);
        CloseHandle(hThread);
        printf("finish thread\n");
      }
      else
      {
        printf("Fail to create thread\n");
      }
#endif
      break;
    case DLL_PROCESS_DETACH:
      //printf("DLL process detach function called\n");
      //fprintf(file, "DLL process detach function called\n");
      break;
    case DLL_THREAD_ATTACH:
      //printf("DLL thread attach function called\n");
      //fprintf(file, "DLL thread attach function called\n");
      break;
    case DLL_THREAD_DETACH:
      //printf("DLL thread detach function called\n");
      //fprintf(file, "DLL thread detach function called\n");
      break;
  }

  /* close file */
  //fclose(file);

  return TRUE;
}

