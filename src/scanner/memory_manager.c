#include <string.h>
#include <errno.h>
#include <stdio.h>
#include "memory_manager.h"
#include "memory_page.h"
#include "debug.h"

#include <stdint.h>

#define MEM_MGR_MAX_FILE_PATH_NAME_LEN  2048
#define MEM_MGR_MAX_FILE_NAME_LEN       15    // .../0x(32-bit addr) + extension (/0x12345678.dat)

int ADD_CALL mem_mgr_init(mem_mgr_t **ppMgr)
{
  mem_mgr_t *pRetMgr;

  if (ppMgr == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  *ppMgr = NULL;

  if ((pRetMgr = malloc(sizeof(mem_mgr_t))) == 0)
  {
    debug_error("Fail to allocate memory manager");
    return -ENOMEM;
  }

  // return empty manager struct
  pRetMgr->pFirstNode = NULL;
  *ppMgr = pRetMgr;

  return 0;
}

int ADD_CALL mem_mgr_destroy(mem_mgr_t **ppMgr)
{
  mem_mgr_t *pMgr;
  if (ppMgr == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  pMgr = *ppMgr;

  // destroy all allocated nodes
  if (mem_mgr_destroy_all_nodes(pMgr) != 0)
  {
    debug_error("Fail to destroy attached nodes");
  }

  // free manager and set pointer to null
  free(pMgr);
  *ppMgr = NULL;

  return 0;
}

int ADD_CALL mem_mgr_destroy_all_nodes(mem_mgr_t *pMgr)
{
  mem_mgr_node_t *pCurrentNode;
  mem_mgr_node_t *pNextNode;

  if (pMgr == NULL)
  {
    debug_error("Null pointer to memory manager");
    return -EINVAL;
  }
  pCurrentNode = pMgr->pFirstNode;

  // free all nodes
  while (pCurrentNode != NULL)
  {
    pNextNode = pCurrentNode->pNextNode;
    mem_mgr_node_destroy(&pCurrentNode);
    pCurrentNode = pNextNode;
  }

  return 0;
}

int ADD_CALL mem_mgr_node_init(mem_mgr_node_t **ppNode, mem_page_t *pPage)
{
  mem_mgr_node_t *pRetNode;

  if (ppNode == NULL)
  {
    debug_error("Null node pointer");
    return -EINVAL;
  }
  *ppNode = NULL;

  if (pPage == NULL)
  {
    debug_error("Null page pointer");
    return -EINVAL;
  }

  if ((pRetNode = malloc(sizeof(mem_mgr_node_t))) == 0)
  {
    debug_error("Fail to allocate memory manager");
    return -ENOMEM;
  }

  // set pointer to return new empty node
  pRetNode->pThisPage = pPage;
  pRetNode->pNextNode = NULL;
  pRetNode->pPrevNode = NULL;
  *ppNode = pRetNode;

  return 0;
}

int ADD_CALL mem_mgr_node_destroy(mem_mgr_node_t **ppNode)
{
  mem_mgr_node_t *pNode;

  if (ppNode == NULL)
  {
    debug_error("Null node pointer");
    return -EINVAL;
  }

  if (*ppNode == NULL)
  {
    debug_error("Pointer to null node");
    return -EINVAL;
  }
  pNode = *ppNode;

  // deallocate node's page
  if (mem_page_destroy(&pNode->pThisPage))
  {
    debug_error("Fail to deallocate page data");
    //return -EINVAL;
  }

  // deallocate and ret null
  free(pNode);
  *ppNode = NULL;

  return 0;
}

int ADD_CALL mem_mgr_node_equal(mem_mgr_node_t *pNode1, mem_mgr_node_t *pNode2, bool *pbEqual)
{
  int retval;

  if (pNode1 == NULL)
  {
    debug_error("Receive null memory node pointer 1");
    return -EINVAL;
  }

  if (pNode2 == NULL)
  {
    debug_error("Receive null memory node pointer 2");
    return -EINVAL;
  }

  if (pbEqual == NULL)
  {
    debug_error("Receive null isEqual return pointer");
    return -EINVAL;
  }
  *pbEqual = false;

  if (!mem_page_is_valid(pNode1->pThisPage))
  {
    debug_error("Receive invalid page in node pointer 1");
    return -EINVAL;
  }

  if (!mem_page_is_valid(pNode2->pThisPage))
  {
    debug_error("Receive invalid page in node pointer 2");
    return -EINVAL;
  }

  if ((retval = mem_page_compare(pNode1->pThisPage, pNode2->pThisPage, pbEqual)) != 0)
  {
    debug_error("Fail to compare node equal");
    return retval;
  }

  return 0;
}

int ADD_CALL mem_mgr_search_addr(mem_mgr_t *pMgr, mem_mgr_node_t **ppResult, LPCVOID lpSearchAddr)
{
  mem_mgr_node_t *pCurrentNode;
  if (pMgr == NULL)
  {
    debug_error("Receive null memory manager pointer");
    return -EINVAL;
  }

  if (ppResult == NULL)
  {
    debug_error("Receive null result node pointer");
    return -EINVAL;
  }
  *ppResult = NULL;

  pCurrentNode = pMgr->pFirstNode;
  while (pCurrentNode != NULL)
  {
    if (lpSearchAddr == pCurrentNode->pThisPage->lpBaseAddr)
    {
      *ppResult = pCurrentNode;
      return 0;
    }

    pCurrentNode = pCurrentNode->pNextNode;
  }

  return 0;
}

// add node to top of list
int ADD_CALL mem_mgr_add_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode)
{
  if (pMgr == NULL)
  {
    debug_error("Receive null memory manager pointer");
    return -EINVAL;
  }

  if (pNode == NULL)
  {
    debug_error("Receive null node pointer");
    return -EINVAL;
  }

  // make sure newly added first element.pPreviousNode is NULL
  pNode->pPrevNode = NULL;

  // set existing first node as next from pNode
  pNode->pNextNode = pMgr->pFirstNode;

  // set newly added pNode as first node
  pMgr->pFirstNode = pNode;

  // newly added node becomes previous node from node that was originally first
  if (pNode->pNextNode != NULL)
  {
    pNode->pNextNode->pPrevNode = pNode;
  }

  return 0;
}

int ADD_CALL mem_mgr_del_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode)
{
  int retval = 0;

  if (pMgr == NULL)
  {
    debug_error("Receive null memory manager pointer");
    return -EINVAL;
  }

  if (pNode == NULL)
  {
    debug_error("Receive null node pointer");
    return -EINVAL;
  }

  // removing first node
  if (pNode == pMgr->pFirstNode)
  {
    // remove reference to deleted node if next node exists
    if (pNode->pNextNode != NULL)
    {
      pNode->pNextNode->pPrevNode = NULL;
    }

    // update to new first node
    pMgr->pFirstNode = pNode->pNextNode;
  }
  else
  {
    // link previous node to next node
    pNode->pPrevNode->pNextNode = pNode->pNextNode;

    // link next node to previous node if not removing last in list
    if (pNode->pNextNode != NULL)
    {
      pNode->pNextNode->pPrevNode = pNode->pPrevNode;
    }
  }

  // deallocate node
  if ((retval = mem_mgr_node_destroy(&pNode)) != 0)
  {
    debug_error("Failed to destroy found node");
    return retval;
  }

  return 0;
}

int ADD_CALL mem_mgr_save_dir(const mem_mgr_t *pMgr, const char *pszDirName)
{
  char sPath[MEM_MGR_MAX_FILE_PATH_NAME_LEN];
  SIZE_T nDirNameLen;
  mem_mgr_node_t const *pCurrentNode;
  mem_page_t const *pCurrentPage;

  // null pointer to mem_mgr_t
  if (pMgr == NULL)
  {
    debug_error("Receive null pMgr");
    return -EINVAL;
  }

  // pszDirName is null
  if (pszDirName == NULL)
  {
    debug_error("Receive null pszDirName");
    return -EINVAL;
  }

  // pszDirName is blank
  if (strcmp(pszDirName,"") == 0)
  {
    debug_error("Receive blank pszDirName");
    return -EINVAL;
  }

  // pszDirName > maximum file path name
  if (((nDirNameLen = strlen(pszDirName)) + MEM_MGR_MAX_FILE_NAME_LEN) >= MEM_MGR_MAX_FILE_PATH_NAME_LEN)
  {
    debug_error("File path name too long");
    return -EINVAL;
  }

  // save each node page as <0xbase_addr>.dat
  pCurrentNode = pMgr->pFirstNode;
  while (pCurrentNode != NULL)
  {
    pCurrentPage = pCurrentNode->pThisPage;
    if (pCurrentPage == NULL)
    {
      debug_error("Saving NULL page");
      return -EINVAL;
    }

    sprintf(sPath, "%s/0x%08X.dat", pszDirName, (uint32_t)pCurrentPage->lpBaseAddr);

    if (mem_page_save(pCurrentPage, sPath) != 0)
    {
      debug_error("Error while saving file %s", sPath);
      return -EINVAL;
    }

    pCurrentNode = pCurrentNode->pNextNode;
  }

  return 0;
}

int ADD_CALL mem_mgr_load_dir(mem_mgr_t *pMgr, const char *pszDirName)
{
  WIN32_FIND_DATA fdFile;
  HANDLE hFind = NULL;
  char sPath[MEM_MGR_MAX_FILE_PATH_NAME_LEN];
  SIZE_T nDirNameLen;
  int retval;
  mem_page_t *pCurrentPage = NULL;
  mem_mgr_node_t *pCurrentNode = NULL;

  if (pMgr == NULL)
  {
    debug_error("Receive null pMgr");
    return -EINVAL;
  }

  if (pszDirName == NULL)
  {
    debug_error("Receive null pszDirName");
    return -EINVAL;
  }

  if (strcmp(pszDirName,"") == 0)
  {
    debug_error("Receive blank pszDirName");
    return -EINVAL;
  }

  if ((nDirNameLen = strlen(pszDirName)) >= MEM_MGR_MAX_FILE_PATH_NAME_LEN)
  {
    debug_error("File path name too long");
    return -EINVAL;
  }

  // all files
  sprintf(sPath, "%s\\*.*", pszDirName);

  if((hFind = FindFirstFile(sPath, &fdFile)) == INVALID_HANDLE_VALUE)
  {
    debug_error("Path not found: %s", pszDirName);
    return -EINVAL;
  }

  do
  {
    // skip "." and ".." directories
    if (strcmp(fdFile.cFileName, ".") != 0 && strcmp(fdFile.cFileName, "..") != 0)
    {
      pCurrentPage = NULL;

      // check overflow file name buffer
      if ((nDirNameLen + strlen(fdFile.cFileName)) >= MEM_MGR_MAX_FILE_PATH_NAME_LEN)
      {
        debug_error("File path name too long for file %s", fdFile.cFileName);
        FindClose(hFind);
        return -EINVAL;
      }

      // skip subdirectories
      if (fdFile.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
      {
        debug_error("Skip subdir: %s\n", sPath);
        continue;
      }

      // sPath = load_dir/currentFile
      sprintf(sPath, "%s/%s", pszDirName, fdFile.cFileName);

      // create page from file
      retval = mem_page_load_file(&pCurrentPage, sPath);
      if (retval != 0)
      {
        debug_error("Fail to create page from file %s", sPath);
        return retval;
      }

      // create node from page
      retval = mem_mgr_node_init(&pCurrentNode, pCurrentPage);
      if (retval != 0)
      {
        debug_error("Fail to create node from file %s", sPath);
        return retval;
      }

      // add node to list
      retval = mem_mgr_add_node(pMgr, pCurrentNode);
      if (retval != 0)
      {
        debug_error("Fail to add node from file %s", sPath);
        return retval;
      }
    }
  }
  while (FindNextFile(hFind, &fdFile));

  FindClose(hFind);

  return 0;
}

int ADD_CALL mem_mgr_load_proc(mem_mgr_t *pMgr, proc_info_t *pProcInfo)
{
  int retval = 0;
  LPCVOID lpcBaseAddr = 0;
  LPCVOID lpcNextAddr = 0;

  if (pMgr == NULL)
  {
    debug_error("Receive null memory manager");
    return -EINVAL;
  }

  if (pProcInfo == NULL)
  {
    debug_error("Receive null process info");
    return -EINVAL;
  }

  // expected empty list, deallocate all nodes
  if (pMgr->pFirstNode != NULL)
  {
    retval = mem_mgr_destroy_all_nodes(pMgr);
  }

  // failed to deallocate existing nodes
  if (retval != 0)
  {
    debug_error("Fail to destroy all nodes - %d", retval);
    return retval;
  }

  // get all pages
  lpcBaseAddr = 0;
  while (1)
  {
    mem_mgr_node_t *pNewNode = NULL;
    mem_page_t *pNewPage = NULL;

    // initialize new page with buffer copied from external process page data starting at lpcBaseAddr
    retval = mem_page_init_from_proc_addr(&pNewPage, pProcInfo, lpcBaseAddr, &lpcNextAddr);
    if (retval != 0 && retval != MEM_PAGE_SIGNAL_END)
    {
      debug_error("Fail to initialize page from proc addr - %d", retval);
      return retval;
    }
    lpcBaseAddr = lpcNextAddr;

    // exit - copied all pages
    if (retval == MEM_PAGE_SIGNAL_END || (uint32_t)lpcBaseAddr >= 0x80000000)
    {
#if 0
      debug_verbose("lpcbase = 0x%08X", (uint32_t)lpcBaseAddr);
      debug_verbose("rc - %d", retval);
      debug_verbose("Reached end of address list");
#endif
      return 0;
    }

    // null page is returned if lpcBaseAddr is not valid
    if (pNewPage == NULL)
    {
      //debug_verbose("skip to addr 0x%08X", (uint32_t)lpcBaseAddr);
      continue;
    }

    // create a new node with memory page
    retval = mem_mgr_node_init(&pNewNode, pNewPage);
    if (retval != 0)
    {
      debug_error("Fail to initialize node - %d", retval);
      return retval;
    }

    // add node at beginning of list of nodes in manager
    retval = mem_mgr_add_node(pMgr, pNewNode);
    if (retval != 0)
    {
      debug_error("Fail to initialize node - %d", retval);
      return retval;
    }
  }

  return 0;
}

int ADD_CALL mem_mgr_refresh_proc(mem_mgr_t *pMgr, proc_info_t *pProcInfo)
{
  int retval;
  mem_mgr_node_t *pCurrentNode;

  if (pMgr == NULL)
  {
    debug_error("Receive null memory manager");
    return -EINVAL;
  }

  if (pProcInfo == NULL)
  {
    debug_error("Receive null process info");
    return -EINVAL;
  }

  // get all pages
  pCurrentNode = pMgr->pFirstNode;
  while (pCurrentNode != NULL)
  {
    mem_page_t *pCurrentPage = pCurrentNode->pThisPage;

    // refresh external page data starting at lpcBaseAddr
    retval = mem_page_refresh_from_proc_addr(&pCurrentPage, pProcInfo);
    if (retval != 0 || pCurrentPage == NULL)
    {
      // failed to update - delete this node and restart the refresh loop
      debug_error("Fail to refresh page - removing node - ret %d", retval);
      mem_mgr_del_node(pMgr, pCurrentNode);
      pCurrentNode = pMgr->pFirstNode;
      continue;
    }

    pCurrentNode = pCurrentNode->pNextNode;
  }

  return 0;
}

void ADD_CALL mem_mgr_print_nodes(mem_mgr_t *pMgr)
{
  int iNodeCount = 0;
  mem_mgr_node_t *pCurrentNode;
  if (pMgr == NULL)
  {
    debug_error("Receive null pointer to memory manager");
    return;
  }
  
  if (pMgr->pFirstNode == NULL)
  {
    debug_error("Receive pointer to memory manager with no nodes");
    return;
  }

  pCurrentNode = pMgr->pFirstNode;
  while (pCurrentNode != NULL)
  {
    printf("node %d:\n", iNodeCount);
    printf("pCurrentNode->pThisPage = 0x%08X\n", (uint32_t) pCurrentNode->pThisPage);
    printf("pCurrentNode->pPrevNode = 0x%08X\n", (uint32_t) pCurrentNode->pPrevNode);
    printf("pCurrentNode->pNextNode = 0x%08X\n", (uint32_t) pCurrentNode->pNextNode);
    mem_page_print_addr_sz(pCurrentNode->pThisPage);
    printf("\n");
    iNodeCount++;
    pCurrentNode = pCurrentNode->pNextNode;
  }
}

#if 0
int ADD_CALL mem_mgr_search_data(mem_mgr_t *pMgr, mem_mgr_node_t **ppResult, const char *pSearchData)
{
  mem_mgr_node_t *pCurrentNode;
  if (pMgr == NULL)
  {
    debug_error("Receive null memory manager pointer");
    return -EINVAL;
  }

  if (ppResult == NULL)
  {
    debug_error("Receive null result node pointer");
    return -EINVAL;
  }
  *ppResult = NULL;

  pCurrentNode = pMgr->pFirstNode;
  while (pCurrentNode != NULL)
  {
    if (lpSearchAddr == pCurrentNode->pThisPage->lpBaseAddr)
    {
      *ppResult = pCurrentNode;
      return 0;
    }

    pCurrentNode = pCurrentNode->pNextNode;
  }

  return 0;
}
#endif

