#ifndef __MEMORY_MANAGER_H__
#define __MEMORY_MANAGER_H__
#include "memory_page.h"
#include "process_info.h"

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

int mem_mgr_init(mem_mgr_t **page);
int mem_mgr_destroy(mem_mgr_t **page);

int mem_mgr_node_init(mem_mgr_node_t **ppNode, mem_page_t *pPage);
int mem_mgr_node_destroy(mem_mgr_node_t **ppNode);

int mem_mgr_add_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode);
int mem_mgr_del_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode);

int mem_mgr_save_dir(const mem_mgr_t *pMgr, const char *pszDirName);
int mem_mgr_load_dir(mem_mgr_t *pMgr, const char *pszDirName);

int mem_mgr_load_proc(mem_mgr_t **pMgr, proc_info_t *pProcInfo);

int mem_mgr_search(mem_mgr_t *pMgr, mem_mgr_t **result, const SIZE_T nStringLength, const char *pSearch);

#endif // __MEMORY_MANAGER_H__
