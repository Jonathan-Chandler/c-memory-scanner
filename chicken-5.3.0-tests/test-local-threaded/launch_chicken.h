#ifndef __LAUNCH_CHICKEN_H__
#define __LAUNCH_CHICKEN_H__
#include <windows.h>

//__declspec(dllexport) DWORD WINAPI launch_chicken(LPVOID lpThreadParameter);
//__declspec(dllexport) BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);
//DWORD WINAPI launch_chicken(LPVOID lpThreadParameter);
__declspec(dllexport) DWORD WINAPI launch_chicken(HMODULE hModule);
BOOL WINAPI DllMain(HMODULE hDll, DWORD dwReason, LPVOID lpReserved);

#endif /* __LAUNCH_CHICKEN__ */

