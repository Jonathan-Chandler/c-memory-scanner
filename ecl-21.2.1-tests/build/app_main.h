/* -*- mode: c;  -*-
   file: app_main.h
*/

#ifndef __APP_MAIN_H__
#define __APP_MAIN_H__

#include <ecl/ecl.h>

// export only
#ifdef ADD_APP_MAIN_EXPORTS
  #define ADD_APP_MAIN_API __declspec(dllexport)
#else
  #define ADD_APP_MAIN_API __declspec(dllimport)
#endif

/* Define calling convention in one place, for convenience. */
//#define ADD_APP_MAIN_CALL __cdecl
#define ADD_APP_MAIN_CALL __stdcall

ADD_APP_MAIN_API unsigned int WINAPI app_main(LPVOID lpThreadParameter);
ADD_APP_MAIN_API BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);


#endif /* APP_MAIN_H */
