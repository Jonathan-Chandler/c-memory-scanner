#ifndef __MEMBLOCK_H__
#define __MEMBLOCK_H__
#include <windows.h>
#include <stdint.h>

typedef struct _search_res_t
{
  uint32_t match_offset;
  struct _search_res_t *next_res;
} search_res_t;

typedef struct _mblock_t
{
  HANDLE hProcess;
  uint8_t *addr;
  int size;
  uint8_t *buffer;
  struct _mblock_t *next;
  search_res_t *search_res;
} mblock_t;

mblock_t* create_memblock(HANDLE hProcess, MEMORY_BASIC_INFORMATION *meminfo);
void destroy_memblock(mblock_t **mb);
int update_block(mblock_t *block);
int search_block(mblock_t *current_block, uint8_t *value, int value_size);

int dump_block(mblock_t *mb);
int dump_block_addr(mblock_t *mb, int addr);

#endif
