#ifndef __DEBUG_H__
#define __DEBUG_H__
#include <stdint.h>
#include <stdio.h>
#include <windows.h>

#define DLL_EXPORT_EN
#ifdef DLL_EXPORT_EN
  #define MEM_API __declspec(dllexport)
#else
  #define MEM_API __declspec(dllimport)
#endif

#define ADD_CALL __cdecl

enum 
{
  DEBUG_LOG_NONE,
  DEBUG_LOG_VERBOSE,
  DEBUG_LOG_ERROR,
  DEBUG_LOG_COUNT,
};
extern int debug_level;

#define debug_verbose(...) \
  if (debug_level >= DEBUG_LOG_VERBOSE) \
  { \
    printf("VERBOSE::%s::%d::%s::", __FILE__, __LINE__, __func__); \
    printf(__VA_ARGS__); \
    printf("\n"); \
  }

#define debug_error(...) \
  if (debug_level >= DEBUG_LOG_VERBOSE) \
  { \
    printf("ERROR::%s::%d::%s::", __FILE__, __LINE__, __func__); \
    printf(__VA_ARGS__); \
    printf("\n"); \
  }

MEM_API void debug_print_mem_basic_flags(MEMORY_BASIC_INFORMATION *memInfo);
MEM_API void debug_print_last_win_error(void);
#endif
