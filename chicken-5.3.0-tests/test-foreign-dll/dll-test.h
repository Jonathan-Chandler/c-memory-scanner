#ifndef __DLL_TEST_H__
#define __DLL_TEST_H__
#include <stdint.h>

//__declspec(dllexport) DWORD WINAPI launch_chicken(LPVOID lpThreadParameter);
//__declspec(dllexport) BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved);
//DWORD WINAPI launch_chicken(LPVOID lpThreadParameter);
__declspec(dllexport) __cdecl char* get_pointer(uint32_t pointer);
__declspec(dllexport) __cdecl char get_char_from_pointer(char *pointer);
__declspec(dllexport) __cdecl void print_char_from_pointer(char *pointer);

#endif /* __LAUNCH_CHICKEN__ */

