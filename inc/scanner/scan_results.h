#ifndef __MEMBLOCK_H__
#define __MEMBLOCK_H__
#include <windows.h>
#include <stdint.h>

typedef struct _scan_res_t
{
  uint32_t match_offset;
  struct _scan_res_t *next_res;
} scan_res_t;

//typedef struct _mblock_t
//{
//  process_info_t proc_info;
//  uint8_t *addr;
//  int size;
//  uint8_t *buffer;
//  uint32_t match_count;
//  search_res_t *search_res;
//  struct _mblock_t *next;
//} mblock_t;
//
//mblock_t* memblock_initialize(HANDLE hProcess, MEMORY_BASIC_INFORMATION *meminfo);
//void memblock_destroy(mblock_t **mb);
//
//int memblock_update(mblock_t *block);
//int memblock_search(mblock_t *current_block, uint8_t *value, int value_size);
//
//int dump_block(mblock_t *mb);
//int dump_block_addr(mblock_t *mb, int addr);


//  HWND hWindow;
//  HANDLE hProcess;
//  DWORD proc_id;

// typedef struct _MEMORY_BASIC_INFORMATION {
//   PVOID  BaseAddress;
//   PVOID  AllocationBase;
//   DWORD  AllocationProtect;
//   WORD   PartitionId;
//   SIZE_T RegionSize;
//   DWORD  State;
//   DWORD  Protect;
//   DWORD  Type;
// } MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;
#endif
