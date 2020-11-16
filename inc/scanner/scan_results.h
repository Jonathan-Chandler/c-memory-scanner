//#ifndef __SCAN_RESULTS_H__
//#define __SCAN_RESULTS_H__
//#include <windows.h>
//#include <stdint.h>
//#include "process_memory.h"
//
//typedef struct search_value_t
//{
//  uint8_t *value;
//  uint8_t size;
//} search_value_t;
//
//typedef struct match_list_t
//{
//  uint32_t match_index;
//  uint32_t match_addr;
//  match_list_t *next_match;
//} match_list_t;
//
//typedef struct scan_res_t
//{
//  proc_mem_t *proc_mem;
//  match_list_t *match_list;
//  struct scan_res_t *next_res;
//} scan_res_t;
//
//int scan_res_init(scan_res_t **scan_res, proc_mem_t *proc_mem);
//int scan_res_destroy(scan_res_t **scan_res);
//
////void memblock_destroy(mblock_t **mb);
////
////int memblock_update(mblock_t *block);
////int memblock_search(mblock_t *current_block, uint8_t *value, int value_size);
////
////int dump_block(mblock_t *mb);
////int dump_block_addr(mblock_t *mb, int addr);
//
//
////  HWND hWindow;
////  HANDLE hProcess;
////  DWORD proc_id;
//
//// typedef struct _MEMORY_BASIC_INFORMATION {
////   PVOID  BaseAddress;
////   PVOID  AllocationBase;
////   DWORD  AllocationProtect;
////   WORD   PartitionId;
////   SIZE_T RegionSize;
////   DWORD  State;
////   DWORD  Protect;
////   DWORD  Type;
//// } MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;
//#endif
