#ifndef __PROCESS_MEMORY_H__
#define __PROCESS_MEMORY_H__
#include <stdint.h>
#include <windows.h>
#include "process_info.h"

#define MEMINFO_PROTECT_IS_WRITABLE (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
#define MEMINFO_PROTECT_IS_READABLE (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE)
#define MEMINFO_PROTECT_IS_EXECUTABLE (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
// PAGE_GUARD

typedef struct match_list_t
{
  uint32_t match_index;
  uint32_t match_addr;
  struct match_list_t *next_match;
} match_list_t;

typedef struct proc_mem_t
{
  uint8_t *addr;
  int size;
  uint8_t *buffer;
  match_list_t *match_list;
  struct proc_mem_t *next;
} proc_mem_t;


int proc_mem_init(proc_mem_t **proc_mem, proc_info_t *proc_info);
int proc_mem_destroy(proc_mem_t **proc_mem);
int proc_mem_refresh(proc_mem_t *proc_mem, proc_info_t *proc_info);
int proc_mem_search(proc_mem_t *proc_mem, uint8_t size, uint8_t *value);

int proc_mem_print_matches(proc_mem_t *proc_mem);
int proc_mem_print(proc_mem_t *proc_mem);

#endif
