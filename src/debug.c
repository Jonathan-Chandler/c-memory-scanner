#include "debug.h"

#if (CURRENT_DEBUG_LOG_LEVEL >= DEBUG_LOG_VERBOSE)
void debug_print_mem_basic_flags(MEMORY_BASIC_INFORMATION *memInfo)
{
    printf("AllocationProtect = 0x%lX", memInfo->AllocationProtect);

    printf("State = 0x%lX\n", memInfo->State);
    printf("State Flags = ");
    if (memInfo->State & MEM_COMMIT)
      printf("MEM_COMMIT ");
    if (memInfo->State & MEM_FREE)
      printf("MEM_FREE ");
    if (memInfo->State & MEM_RESERVE)
      printf("MEM_RESERVE ");
    printf("\n");

    printf("Protect = 0x%lX\n", memInfo->Protect);
    printf("Protect Flags = ");
    if (memInfo->Protect & PAGE_NOACCESS)
      printf("PAGE_NOACCESS ");
    if (memInfo->Protect & PAGE_READONLY)
      printf("PAGE_READONLY ");
    if (memInfo->Protect & PAGE_READWRITE)
      printf("PAGE_READWRITE ");
    if (memInfo->Protect & PAGE_WRITECOPY)
      printf("PAGE_WRITECOPY ");
    if (memInfo->Protect & PAGE_TARGETS_INVALID)
      printf("PAGE_TARGETS_INVALID ");
    if (memInfo->Protect & PAGE_GUARD)
      printf("PAGE_GUARD ");
    printf("\n");

    printf("Type = 0x%lX\n", memInfo->Type);
    printf("Type Flags = ");
    if (memInfo->Type & MEM_IMAGE)
      printf("MEM_IMAGE ");
    if (memInfo->Type & MEM_MAPPED)
      printf("MEM_MAPPED ");
    if (memInfo->Type & MEM_PRIVATE)
      printf("MEM_PRIVATE ");
    printf("\n");
}
#else
void debug_print_mem_basic_flags(MEMORY_BASIC_INFORMATION *memInfo){}
#endif

