#ifndef __MEMORY_PAGE_H__
#define __MEMORY_PAGE_H__
#include <windows.h>

typedef struct mem_page_t
{
  LPCVOID lpBaseAddr;
  SIZE_T nSize;
  char *pcBuffer;
} mem_page_t;

int mem_page_init(mem_page_t **page, SIZE_T nSize);
int mem_page_destroy(mem_page_t **page);

int mem_page_save(const mem_page_t *page, const char *pszFileName);
int mem_page_load(mem_page_t **page, const char *pszFileName);

#endif // __MEMORY_PAGE_H__
