#ifndef __LOAD_APP_MAIN__
#define __LOAD_APP_MAIN__

#include <windows.h>

// export only
#ifdef ADD_APP_MAIN_EXPORTS
  #define ADD_APP_MAIN_API __declspec(dllexport)
#else
  #define ADD_APP_MAIN_API __declspec(dllimport)
#endif

/* Define calling convention in one place, for convenience. */
//#define ADD_APP_MAIN_CALL __cdecl
#define ADD_APP_MAIN_CALL __cdecl

//ADD_APP_MAIN_API void ADD_APP_MAIN_CALL app_main(void);
//static long unsigned int __stdcall app_main(void *pvoid);
//ADD_APP_MAIN_API BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);

//__declspec(dllexport) long unsigned int __stdcall app_main(void *pvoid);

__declspec(dllexport) long unsigned int __stdcall load_app_set_path(void *pvoid);
ADD_APP_MAIN_API BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);

#endif // __LOAD_APP_MAIN__
