#ifndef __MEMBLOCK_H__
#define __MEMBLOCK_H__
#include <windows.h>
#include <stdint.h>

typedef struct _mblock_t
{
  uint8_t *addr;
  int size;
  uint8_t *buffer;
  struct _mblock_t *next;
} mblock_t;

mblock_t* create_memblock(HANDLE hProcess, MEMORY_BASIC_INFORMATION *meminfo);
void destroy_memblock(mblock_t *mb);

#endif
