#include <string.h>
#include <errno.h>
#include <stdio.h>
#include "memory_manager.h"
#include "memory_page.h"
#include "debug.h"

#include <stdint.h>

#define MEM_MGR_MAX_FILE_PATH_NAME_LEN 2048

int mem_mgr_init(mem_mgr_t **ppMgr)
{
  mem_mgr_t *pRetMgr;

  if (ppMgr == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  *ppMgr = NULL;

  if ((pRetMgr = calloc(1, sizeof(mem_mgr_t))) == 0)
  {
    debug_error("Fail to allocate memory manager");
    return -ENOMEM;
  }

  // return empty manager struct
  pRetMgr->pFirstNode = NULL;
  pRetMgr->pLastNode = NULL;
  *ppMgr = pRetMgr;

  return 0;
}

int mem_mgr_destroy(mem_mgr_t **ppMgr)
{
  mem_mgr_node_t *pCurrentNode;
  mem_mgr_node_t *pNextNode = NULL;
  mem_mgr_t *pMgr;
  if (ppMgr == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  pMgr = *ppMgr;
  pCurrentNode = pMgr->pFirstNode;

  // free all nodes
  while (pCurrentNode != NULL)
  {
    pNextNode = pCurrentNode->pNextNode;
    mem_mgr_node_destroy(&pCurrentNode);
    pCurrentNode = pNextNode;
  }

  // free manager and set pointer to null
  free(pMgr);
  *ppMgr = NULL;

  return 0;
}

int mem_mgr_node_init(mem_mgr_node_t **ppNode, mem_page_t *pPage)
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
  *ppNode = pRetNode;

  return 0;
}

int mem_mgr_node_destroy(mem_mgr_node_t **ppNode)
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

//int mem_mgr_save(const mem_mgr_t *pMgr, const char *pszFileName);
//int mem_mgr_load_proc(mem_mgr_t **pMgr, proc_info_t *pProcInfo);
//int mem_mgr_search(mem_mgr_t *pMgr, mem_mgr_t **result, const SIZE_T nStringLength, const char *pSearch);

int mem_mgr_load_dir(mem_mgr_t *pMgr, const char *pszDirName)
{
  WIN32_FIND_DATA fdFile;
  HANDLE hFind = NULL;
  char sPath[MEM_MGR_MAX_FILE_PATH_NAME_LEN];
  SIZE_T nDirNameLen;

  if (pMgr == NULL)
  {
    debug_error("Receive null pMgr");
    return -EINVAL;
  }

  if (pszDirName == NULL)
  {
    debug_error("Receive null pMgr");
    return -EINVAL;
  }

  if ((nDirNameLen = strlen(pszDirName)) >= MEM_MGR_MAX_FILE_PATH_NAME_LEN)
  {
    debug_error("File path name too long");
    return -EINVAL;
  }

  //Specify a file mask. *.* = We want everything!
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
      //int retval;
      //mem_page_t *pCurrentPage = NULL;

      // don't overflow buffer
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

#if 0
      if ((retval = mem_page_load(&pCurrentPage, sPath)) == 0)
      {
        mem_mgr_add_node(pMgr, pCurrentPage);
      }
      else
      {
        debug_error("Fail to create node for file %s\n", sPath);
        continue;
      }
#endif
    }
  }
  while (FindNextFile(hFind, &fdFile));

  FindClose(hFind);

  return 0;
}

int mem_mgr_add_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode)
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

  // append to non empty list
  if (pMgr->pLastNode != NULL)
    pMgr->pLastNode->pNextNode = pNode;

  // update last node
  pMgr->pLastNode = pNode;

  // update first node if empty list
  if (pMgr->pFirstNode == NULL)
    pMgr->pFirstNode = pNode;

  return 0;
}

int mem_mgr_del_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode)
{
  int retval = 0;
  mem_mgr_node_t *pPrevNode;
  mem_mgr_node_t *pCurrentNode;

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

  // search for node addr
  pPrevNode = NULL;
  pCurrentNode = pMgr->pFirstNode;
  while (pCurrentNode != NULL)
  {
    //printf("pCurrent addr = 0x%08X\n", (uint32_t)pCurrentNode);
    // found deleted node
    if (pCurrentNode == pNode)
    {
      // removing first node
      if (pNode == pMgr->pFirstNode)
      {
        pMgr->pFirstNode = pCurrentNode->pNextNode;
      }

      // removing last node
      if (pNode == pMgr->pLastNode)
      {
        pMgr->pLastNode = pPrevNode;
      }

      // skip removed node in linked list if not first node
      if (pPrevNode != NULL)
      {
        pPrevNode->pNextNode = pCurrentNode->pNextNode;
      }

      // deallocate node
      if ((retval = mem_mgr_node_destroy(&pCurrentNode)) != 0)
      {
        debug_error("Failed to destroy found node");
        return retval;
      }

      return 0;
    }

    // set previous node to current and get next
    pPrevNode = pCurrentNode;
    pCurrentNode = pCurrentNode->pNextNode;
  }

  // not found
  debug_error("Failed to find deleted node");
  return -ENXIO;
}

