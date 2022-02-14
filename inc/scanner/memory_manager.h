#ifndef __MEMORY_MANAGER_H__
#define __MEMORY_MANAGER_H__
#include "memory_page.h"
#include "process_info.h"
#include "debug.h"

typedef struct mem_mgr_node_t
{
  mem_page_t *pThisPage;
  struct mem_mgr_node_t *pNextNode;
  struct mem_mgr_node_t *pPrevNode;
} mem_mgr_node_t;

typedef struct mem_mgr_t
{
  mem_mgr_node_t *pFirstNode;
} mem_mgr_t;

MEM_API int ADD_CALL mem_mgr_init(mem_mgr_t **ppMgr);
MEM_API int ADD_CALL mem_mgr_destroy(mem_mgr_t **ppMgr);
MEM_API int ADD_CALL mem_mgr_destroy_all_nodes(mem_mgr_t *pMgr);

MEM_API int ADD_CALL mem_mgr_node_init(mem_mgr_node_t **ppNode, mem_page_t *pPage);
MEM_API int ADD_CALL mem_mgr_node_destroy(mem_mgr_node_t **ppNode);

MEM_API int ADD_CALL mem_mgr_node_get_page(mem_mgr_node_t *pNode, mem_page_t **ppPage);

MEM_API int ADD_CALL mem_mgr_node_equal(mem_mgr_node_t *pNode1, mem_mgr_node_t *pNode2, bool *pbEqual);
MEM_API int ADD_CALL mem_mgr_search_addr(mem_mgr_t *pMgr, mem_mgr_node_t **ppResult, LPCVOID lpSearchAddr);

MEM_API int ADD_CALL mem_mgr_add_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode);
MEM_API int ADD_CALL mem_mgr_del_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode);

MEM_API int ADD_CALL mem_mgr_save_dir(const mem_mgr_t *pMgr, const char *pszDirName);
MEM_API int ADD_CALL mem_mgr_load_dir(mem_mgr_t *pMgr, const char *pszDirName);

MEM_API int ADD_CALL mem_mgr_load_proc(mem_mgr_t *pMgr, proc_info_t *pProcInfo);

MEM_API int ADD_CALL mem_mgr_filter_pages(mem_mgr_t *pMgr, mem_mgr_node_t **ppResult, const SIZE_T nSearchDataLength, const char *pSearchData);

MEM_API int ADD_CALL mem_mgr_page_search(mem_mgr_t *pMgr, const SIZE_T nSearchDataLength, const char *pSearchData, LPCVOID nStartAddress, bool *pbFoundPage, LPCVOID *pFoundAddress);

MEM_API void ADD_CALL mem_mgr_print_nodes(mem_mgr_t *pMgr);


#endif // __MEMORY_MANAGER_H__
