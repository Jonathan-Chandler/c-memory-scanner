#include "dll-test.h"
#include <stdio.h>

// dumpbin /EXPORTS dll-test.dll
// #x00AF9F4E
// (#~get_pointer #x00AF9F4E return: pointer:)
// (#~get_pointer #x00AF9F4E)
// (#~get_char_from_pointer #x00AF9F4E return: char:)
// (#~print_char_from_pointer #x00AF9F4E)
// (#~get_char_from_pointer #x00AF9F4E return: char:)
__declspec(dllexport) __cdecl char* get_pointer(uint32_t pointer)
{
  return (char*) pointer;
}

__declspec(dllexport) __cdecl char get_char_from_pointer(char *pointer)
{
  return *pointer;
}

__declspec(dllexport) __cdecl void print_char_from_pointer(char *pointer)
{
  printf("%c\n", *pointer);
}

