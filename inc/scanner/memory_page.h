#ifndef __MEMORY_PAGE_H__
#define __MEMORY_PAGE_H__
#include <windows.h>
#include <stdbool.h>

typedef struct mem_page_t
{
  LPCVOID lpBaseAddr;
  SIZE_T nSize;
  char *pcBuffer;
} mem_page_t;

int mem_page_init(mem_page_t **page, SIZE_T nSize);
int mem_page_destroy(mem_page_t **page);

bool mem_page_is_valid(mem_page_t *page);

int mem_page_save(const mem_page_t *page, const char *pszFileName);
int mem_page_load_buffer(mem_page_t *pMemPage, LPCVOID lpBaseAddr, SIZE_T nSize, const char *pCopiedBuff);
int mem_page_load_file(mem_page_t **page, const char *pszFileName);

int mem_page_search(mem_page_t *pPage, const SIZE_T nStringLength, const char *pSearch, SIZE_T nStartIndex, bool *bWasFound, SIZE_T *nFoundIndex);

#endif // __MEMORY_PAGE_H__
