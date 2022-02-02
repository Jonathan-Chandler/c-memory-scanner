#include <string.h>
#include <errno.h>
#include <stdio.h>
#include "memory_manager.h"
#include "memory_page.h"
#include "debug.h"

#include <stdint.h>

#define MEM_MGR_MAX_FILE_PATH_NAME_LEN  2048
#define MEM_MGR_MAX_FILE_NAME_LEN       15    // /0x(32-bit addr) + extension (/0x12345678.dat)

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
  pRetNode->pPrevNode = NULL;
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

int mem_mgr_save_dir(const mem_mgr_t *pMgr, const char *pszDirName)
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

// add node to top of list
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

int mem_mgr_del_node(mem_mgr_t *pMgr, mem_mgr_node_t *pNode)
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

