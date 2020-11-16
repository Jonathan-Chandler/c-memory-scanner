#ifndef __MEMSCAN_H__
#define __MEMSCAN_H__
#include <stdint.h>
#include <windows.h>
#include "scan_results.h"
#include "process_info.h"
#include "process_memory.h"

#define MEMINFO_PROTECT_IS_WRITABLE (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)
#define MEMINFO_PROTECT_IS_READABLE (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE)
#define MEMINFO_PROTECT_IS_EXECUTABLE (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)

// PAGE_GUARD
typedef struct 
{
  proc_info_t *proc_info; 
  //scan_res_t *scan_results;
  proc_mem_t *proc_mem;
} mem_scan_t;

int mem_scan_init(mem_scan_t **this_scan, const char *windowTitle);
int mem_scan_destroy(mem_scan_t **this_scan);

int mem_scan_search(mem_scan_t *this_scan, uint8_t value_size, uint8_t *value);
int mem_scan_print(mem_scan_t *this_scan);

//int mem_scan_destroy(memory_scan_t **this_scan);
//int mem_scan_create(memory_scan_t *this_scan);
//int mem_scan_update(memory_scan_t *this_scan);
//int mem_scan_search(memory_scan_t *this_scan, uint8_t *value, int value_size);
//int mem_scan_search_new(memory_scan_t *this_scan);
//
//int dump_block_list(mblock_t *mb_list);
//int dump_list_addr(mblock_t *mb_list, int addr);
//int memscan_dump_results(memory_scan_t *current_scan);

#endif
