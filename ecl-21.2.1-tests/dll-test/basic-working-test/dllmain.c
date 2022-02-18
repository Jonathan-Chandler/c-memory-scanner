#include <stdio.h>
#include <windows.h>
//#include "stdafx.h"
#include "dllmain.h"

// BOOL WINAPI DllMain(HMODULE hDLL, DWORD Reason, LPVOID Reserved) 
BOOL API_ADD_DLL WINAPI DllMain(HMODULE hDLL, DWORD dwReason, LPVOID lpReserved) 
{
  /* open file */
  FILE *file;
  file = fopen("C:\\work\\c\\dll-test\\temp4.txt", "a+");

  switch(dwReason) 
  {
    case DLL_PROCESS_ATTACH:
      printf("DLL attach function called\n");
      fprintf(file, "DLL attach function called\n");
      break;
    case DLL_PROCESS_DETACH:
      fprintf(file, "DLL detach function called\n");
      break;
    case DLL_THREAD_ATTACH:
      printf("DLL thread attach function called\n");
      fprintf(file, "DLL thread attach function called\n");
      break;
    case DLL_THREAD_DETACH:
      fprintf(file, "DLL thread detach function called\n");
      break;
  }

  /* close file */
  fclose(file);

  return TRUE;
}

