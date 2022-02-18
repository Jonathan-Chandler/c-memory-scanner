#ifndef __DLL_MAIN_H__
#define __DLL_MAIN_H__
#include <windows.h>

#ifdef BUILD_DLL
  #define API_ADD_DLL __declspec(dllexport)
#else
  #define API_ADD_DLL __declspec(dllimport)
#endif

//BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);
API_ADD_DLL BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);

#endif // __DLL_MAIN_H__
