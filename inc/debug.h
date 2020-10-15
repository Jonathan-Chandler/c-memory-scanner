#ifndef __DEBUG_H__
#define __DEBUG_H__
#include <stdint.h>
#include <stdio.h>
#include <windows.h>

#define DEBUG_LOG_NONE      0
#define DEBUG_LOG_ERROR     1
#define DEBUG_LOG_VERBOSE   2

#ifndef CURRENT_DEBUG_LOG_LEVEL
#define CURRENT_DEBUG_LOG_LEVEL DEBUG_LOG_VERBOSE
#endif

// #define CURRENT_DEBUG_LOG_LEVEL DEBUG_LOG_ERROR
//#define CURRENT_DEBUG_LOG_LEVEL DEBUG_LOG_NONE

#if (CURRENT_DEBUG_LOG_LEVEL >= DEBUG_LOG_VERBOSE)
#define debug_verbose(...) \
  printf("VERBOSE::%s::%d::%s::", __FILE__, __LINE__, __func__); \
  printf(__VA_ARGS__); \
  printf("\n");
#else
#define debug_verbose(...)
#endif

#if (CURRENT_DEBUG_LOG_LEVEL >= DEBUG_LOG_ERROR)
#define debug_error(...) \
  printf("ERROR::%s::%d::%s::", __FILE__, __LINE__, __func__); \
  printf(__VA_ARGS__); \
  printf("\n");
#else
#define debug_error(...)
#endif

void debug_print_mem_basic_flags(MEMORY_BASIC_INFORMATION *memInfo);
#endif
