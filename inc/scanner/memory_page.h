#ifndef __MEMORY_PAGE_H__
#define __MEMORY_PAGE_H__
#include "process_info.h"
#include <windows.h>
#include <stdbool.h>
#include "debug.h"

enum
{
  MEM_PAGE_SIGNAL_END = 150,
  MEM_PAGE_RET_VALUE_MAX,
};

typedef struct mem_page_t
{
  LPCVOID lpBaseAddr;
  SIZE_T nSize;
  char *pcBuffer;
} mem_page_t;

MEM_API int ADD_CALL mem_page_init(mem_page_t **ppPage, SIZE_T nSize);
MEM_API int ADD_CALL mem_page_destroy(mem_page_t **ppPage);
MEM_API int ADD_CALL mem_page_init_from_proc_addr(mem_page_t **ppPage, proc_info_t *pProcInfo, LPCVOID lpcBaseAddr, LPCVOID *lpcNextAddr);
MEM_API int ADD_CALL mem_page_refresh_from_proc_addr(mem_page_t **ppPage, proc_info_t *pProcInfo);

MEM_API bool ADD_CALL mem_page_is_valid(const mem_page_t *page);
MEM_API int ADD_CALL mem_page_compare(const mem_page_t *pPage1, const mem_page_t *pPage2, bool *pEqual);

MEM_API int ADD_CALL mem_page_save(const mem_page_t *page, const char *pszFileName);
MEM_API int ADD_CALL mem_page_load_buffer(mem_page_t *pMemPage, LPCVOID lpBaseAddr, SIZE_T nSize, const char *pCopiedBuff);
MEM_API int ADD_CALL mem_page_load_file(mem_page_t **page, const char *pszFileName);

MEM_API int ADD_CALL mem_page_search(mem_page_t *pPage, const SIZE_T nStringLength, const char *pSearch, SIZE_T nStartIndex, bool *bWasFound, SIZE_T *nFoundIndex);
MEM_API int ADD_CALL mem_page_update_from_process(mem_page_t *pPage, proc_info_t *pProcInfo);

MEM_API void ADD_CALL mem_page_print_addr_sz(mem_page_t *pPage);

#endif // __MEMORY_PAGE_H__
