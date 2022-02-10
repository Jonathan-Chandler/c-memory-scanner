#include <errno.h>
#include <stdio.h>
#include "memory_page.h"
#include "debug.h"


#define MEMORY_PAGE_BUFFER_WRITE_SIZE 1024          // number of bytes to write at once when saving a page         
#define MEMORY_PAGE_BUFFER_READ_SIZE  1024          // number of bytes to read at once when loading a saved page
#define MEM_PAGE_READ_SZ (1024*4)                   // number of bytes read during each loop of ReadProcessMemory

// create buffer to store page
int ADD_CALL mem_page_init(mem_page_t **ppPage, SIZE_T nSize)
{
  mem_page_t *pRetPage;
  char *pBuf;

  if (ppPage == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  *ppPage = NULL;

  if (nSize == 0)
  {
    debug_error("Request 0 byte page");
    return -EINVAL;
  }

  if ((pRetPage = calloc(1, sizeof(mem_page_t))) == 0)
  {
    debug_error("Fail to allocate page struct");
    return -ENOMEM;
  }

  if ((pBuf = calloc(nSize, sizeof(char))) == 0)
  {
    debug_error("Fail to allocate %lu bytes for page buffer", nSize);
    free(pRetPage);
    return -ENOMEM;
  }

  // return new page
  pRetPage->nSize = nSize;
  pRetPage->pcBuffer = pBuf;
  *ppPage = pRetPage;

  return 0;
}

int ADD_CALL mem_page_init_from_proc_addr(mem_page_t **ppPage, proc_info_t *pProcInfo, LPCVOID lpcBaseAddr, LPCVOID *lpcNextAddr)
{
  MEMORY_BASIC_INFORMATION memInfo;
  mem_page_t *pRetPage = NULL;
  int retval;
  //debug_verbose("ppPage=\n");
  //debug_verbose("lpcNextAddr=0x%08X", (uint32_t)*lpcNextAddr);
  //debug_verbose("lpcBaseAddr=0x%08X", (uint32_t)lpcBaseAddr);

  if (ppPage == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  *ppPage = NULL;

  if (pProcInfo == NULL)
  {
    debug_error("Null process info pointer");
    return -EINVAL;
  }

  if (lpcNextAddr == NULL)
  {
    debug_error("Null next addr pointer");
    return -EINVAL;
  }

  if (VirtualQueryEx(pProcInfo->hProcess, lpcBaseAddr, &memInfo, sizeof(memInfo)) == 0)
  {
    //debug_error("VirtualQueryEx returns 0");
    retval = MEM_PAGE_SIGNAL_END;
    goto deallocate_exit;
  }

  // set next memory page start addr
  *lpcNextAddr = memInfo.BaseAddress + memInfo.RegionSize;
  //debug_verbose("memInfo.BaseAddress=0x%08X", (uint32_t)memInfo.BaseAddress);
  //debug_verbose("memInfo.RegionSize=0x%08X", (uint32_t)memInfo.RegionSize);
  
  // ignore uncommitted / non-writable / guarded pages
  if (!(memInfo.State & MEM_COMMIT)
    ||  !(memInfo.Protect & MEMINFO_PROTECT_IS_WRITABLE)
    ||  (memInfo.Protect & PAGE_GUARD))
  {
    // page should be skipped - return null page with no error
    retval = 0;
    goto deallocate_exit;
  }

  // allocate space for queried address
  if ((retval = mem_page_init(&pRetPage, memInfo.RegionSize)) != 0)
  {
    debug_error("Fail to init mem page - %d", retval);
    goto deallocate_exit;
  }

  if (pRetPage == NULL)
  {
    retval = -ENOMEM;
    debug_error("Fail to init mem page - %d", retval);
    goto deallocate_exit;
  }

  // set base address pointer
  pRetPage->lpBaseAddr = memInfo.BaseAddress;

  // read process memory page to buffer
  if ((retval = mem_page_update_from_process(pRetPage, pProcInfo)) != 0)
  {
    debug_error("Fail to update mem page - %d", retval);
    goto deallocate_exit;
  }

  // return new page
  *ppPage = pRetPage;

  return 0;

deallocate_exit:
  mem_page_destroy(&pRetPage);
  *ppPage = NULL;

  return retval;
}

int ADD_CALL mem_page_refresh_from_proc_addr(mem_page_t **ppPage, proc_info_t *pProcInfo)
{
  MEMORY_BASIC_INFORMATION memInfo;
  mem_page_t *pPage = NULL;
  int retval;

  if (ppPage == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }

  if (*ppPage == NULL)
  {
    debug_error("Null return page *pointer");
    return -EINVAL;
  }
  pPage = *ppPage;

  if (pProcInfo == NULL)
  {
    debug_error("Null process info pointer");
    return -EINVAL;
  }

  if (VirtualQueryEx(pProcInfo->hProcess, pPage->lpBaseAddr, &memInfo, sizeof(memInfo)) == 0)
  {
    // reached end of list
    //debug_verbose("VirtualQueryEx ret 0");
    retval = MEM_PAGE_SIGNAL_END;
    goto deallocate_exit;
  }

  // ignore uncommitted / non-writable / guarded pages
  if (!(memInfo.State & MEM_COMMIT)
    ||  !(memInfo.Protect & MEMINFO_PROTECT_IS_WRITABLE)
    ||  (memInfo.Protect & PAGE_GUARD))
  {
    // page should be skipped - return null page with no error
    retval = 0;
    goto deallocate_exit;
  }

  // allocated space did not match memInfo
  if (pPage->nSize != memInfo.RegionSize)
  {
    retval = -EINVAL;
    goto deallocate_exit;
  }

  // read process memory page to buffer
  if ((retval = mem_page_update_from_process(pPage, pProcInfo)) != 0)
  {
    goto deallocate_exit;
  }

  return 0;

deallocate_exit:
  mem_page_destroy(ppPage);

  return retval;
}

int ADD_CALL mem_page_destroy(mem_page_t **ppMemPage)
{
  mem_page_t *pPage;
  int retval = 0;
  char *pcBuffer;

  if (ppMemPage == NULL)
  {
    debug_error("Null pointer to page");
    return -EINVAL;
  }

  pPage = *ppMemPage;
  if (pPage == NULL)
  {
    // already deallocated
    //debug_error("Deallocating NULL page");
    return -EINVAL;
  }

  pcBuffer = pPage->pcBuffer;

  if (pcBuffer != NULL)
  {
    free(pcBuffer);
  }
  else
  {
    // don't return error value or page won't be destroyed
    debug_error("Null page buffer pointer");
    retval = -ENXIO;
  }

  free(pPage);

  // set pointer to destroyed page as null
  *ppMemPage = NULL;

  return retval;
}

int ADD_CALL mem_page_compare(const mem_page_t *pPage1, const mem_page_t *pPage2, bool *pEqual)
{
  if (!mem_page_is_valid(pPage1))
  {
    debug_error("Compare to invalid page - 1");
    return -EINVAL;
  }

  if (!mem_page_is_valid(pPage2))
  {
    debug_error("Compare to invalid page - 2");
    return -EINVAL;
  }

  if (pEqual == NULL)
  {
    debug_error("Receive NULL pEqual");
    return -EINVAL;
  }

  if (pPage1->lpBaseAddr != pPage2->lpBaseAddr)
  {
    *pEqual = false;
    return 0;
  }

  if (pPage1->nSize != pPage2->nSize)
  {
    *pEqual = false;
    return 0;
  }

  if (memcmp(pPage1->pcBuffer, pPage2->pcBuffer, pPage1->nSize) != 0)
  {
    *pEqual = false;
    return 0;
  }

  *pEqual = true;
  return 0;
}

bool ADD_CALL mem_page_is_valid(const mem_page_t *page)
{
  if (page == NULL)
  {
    debug_error("NULL memory page pointer");
    return false;
  }

  if (page->nSize == 0)
  {
    debug_error("Zero length memory page");
    return false;
  }

  if (page->pcBuffer == 0)
  {
    debug_error("Null memory page buffer");
    return false;
  }

  return true;
}

int ADD_CALL mem_page_save(const mem_page_t *pMemPage, const char *pszFileName)
{
  FILE *pFile = NULL;
  SIZE_T nBytesWritten;

  if (pMemPage == 0)
  {
    debug_error("Null memory page pointer");
    return -EINVAL;
  }

  // null string pointer
  if (pszFileName == 0)
  {
    debug_error("Try to save to null file name");
    return -EINVAL;
  }

  // empty string
  if (strcmp(pszFileName, "") == 0)
  {
    debug_error("Try to save blank file name");
    return -EINVAL;
  }

  if (pMemPage->nSize == 0)
  {
    debug_error("Try to save empty memory page buffer");
    return -EINVAL;
  }

  if (pMemPage->pcBuffer == NULL)
  {
    debug_error("Try to save NULL memory buffer");
    return -EINVAL;
  }

  if ((pFile = fopen(pszFileName, "wb")) == NULL)
  {
    debug_error("Fail to open file %s", pszFileName);
    return -EBADF;
  }

  // write original start address
  if (fwrite(&(pMemPage->lpBaseAddr), sizeof(LPCVOID), 1, pFile) != 1)
  {
    debug_error("Fail to open file %s", pszFileName);
    goto exit_fail;
  }

  // write size of buffer
  if (fwrite(&(pMemPage->nSize), sizeof(SIZE_T), 1, pFile) != 1)
  {
    debug_error("Fail to open file %s", pszFileName);
    goto exit_fail;
  }

  // write buffer
  nBytesWritten = 0;
  do 
  {
    SIZE_T nBytesToWrite = pMemPage->nSize - nBytesWritten;

    // limit written byte count to MEMORY_PAGE_BUFFER_WRITE_SIZE
    nBytesToWrite = (nBytesToWrite >= MEMORY_PAGE_BUFFER_WRITE_SIZE) ? MEMORY_PAGE_BUFFER_WRITE_SIZE : nBytesToWrite;

    if ((fwrite(&(pMemPage->pcBuffer[nBytesWritten]), sizeof(char), nBytesToWrite, pFile) != nBytesToWrite))
    {
      debug_error("Fail while writing buffer - nBytesWritten = %lu - nSize = %lu", nBytesWritten, pMemPage->nSize);
      goto exit_fail;
    }

    nBytesWritten += nBytesToWrite;
  }
  while (nBytesWritten < pMemPage->nSize);

  fclose(pFile);

  return 0;

exit_fail:
  if (pFile != NULL)
    fclose(pFile);

  return -EBADF;
}

int ADD_CALL mem_page_load_buffer(mem_page_t *pMemPage, LPCVOID lpBaseAddr, SIZE_T nSize, const char *pCopiedBuff)
{
  if (pMemPage == NULL)
  {
    debug_error("NULL memory page");
    return -EINVAL;
  }

  if (pCopiedBuff == NULL)
  {
    debug_error("NULL copied buffer");
    return -EINVAL;
  }

  if (pMemPage->pcBuffer == NULL)
  {
    debug_error("NULL destination page buffer");
    return -EINVAL;
  }

  if (pMemPage->nSize != nSize)
  {
    debug_error("Page size does not match");
    return -EINVAL;
  }

  // copy addr
  pMemPage->lpBaseAddr = lpBaseAddr;

  // copy buffer
  memcpy(pMemPage->pcBuffer, pCopiedBuff, nSize);

  return 0;
}

int ADD_CALL mem_page_load_file(mem_page_t **ppMemPage, const char *pszFileName)
{
  mem_page_t *pRetPage = NULL;
  FILE *pFile = NULL;
  LPCVOID lpReadBaseAddr = 0;
  SIZE_T nExpectedBufferBytes = 0;
  SIZE_T nBytesRead;

  if (ppMemPage == NULL)
  {
    debug_error("Null memory page pointer");
    return -EINVAL;
  }
  *ppMemPage = 0;

  // null string pointer
  if (pszFileName == 0)
  {
    debug_error("Try to save to null file name");
    return -EINVAL;
  }

  // empty string
  if (strcmp(pszFileName, "") == 0)
  {
    debug_error("Try to save blank file name");
    return -EINVAL;
  }

  if ((pFile = fopen(pszFileName, "rb")) == NULL)
  {
    debug_error("Fail to open file %s", pszFileName);
    return -EBADF;
  }

  if (fread(&(lpReadBaseAddr), sizeof(LPCVOID), 1, pFile) != 1)
  {
    debug_error("Fail to read file %s base address", pszFileName);
    goto exit_fail;
  }

  if (fread(&(nExpectedBufferBytes), sizeof(SIZE_T), 1, pFile) != 1)
  {
    debug_error("Fail to read file %s expected buffer size", pszFileName);
    goto exit_fail;
  }

  if (nExpectedBufferBytes == 0)
  {
    debug_error("Read invalid buffer size");
    goto exit_fail;
  }

  if (mem_page_init(&pRetPage, nExpectedBufferBytes) != 0)
  {
    debug_error("Fail to allocate mem page - requested %lu bytes", nExpectedBufferBytes);
    goto exit_fail;
  }

  // set values read from file
  pRetPage->lpBaseAddr = lpReadBaseAddr;
  pRetPage->nSize = nExpectedBufferBytes;

  // read to the memory page data buffer
  nBytesRead = 0;
  do 
  {
    SIZE_T nBytesToRead = (nExpectedBufferBytes - nBytesRead);

    // limit reading to MEMORY_PAGE_READ_SIZE bytes at once
    nBytesToRead = (nBytesToRead > MEMORY_PAGE_BUFFER_READ_SIZE) ? MEMORY_PAGE_BUFFER_READ_SIZE : nBytesToRead;

    if ((fread(&(pRetPage->pcBuffer[nBytesRead]), nBytesToRead, 1, pFile) != 1))
    {
      debug_error("Fail while writing buffer - nBytesRead = %lu - nSize = %lu", nBytesRead, pRetPage->nSize);
      goto exit_fail;
    }

    nBytesRead += nBytesToRead;
  }
  while (nBytesRead < nExpectedBufferBytes);

  // close file and return page
  if (pFile)
    fclose(pFile);

  *ppMemPage = pRetPage;
  return 0;

exit_fail:
  mem_page_destroy(&pRetPage);
  *ppMemPage = NULL;

  if (pFile)
    fclose(pFile);
  return -EBADF;
}

int ADD_CALL mem_page_search(mem_page_t *pPage, const SIZE_T nStringLength, const char *pSearch, SIZE_T nStartIndex, bool *bWasFound, SIZE_T *nFoundIndex)
{
  // exit invalid pointers
  if (pPage == NULL || pSearch == NULL || bWasFound == NULL || nFoundIndex == NULL)
  {
    debug_error("Receive NULL pointer");
    return -EINVAL;
  }

  // exit invalid memory page
  if (!mem_page_is_valid(pPage))
  {
    debug_error("Receive invalid mem page");
    return -EINVAL;
  }

  // exit search string was 0 length
  if (nStringLength == 0)
  {
    debug_error("Search string length was 0");
    return -EINVAL;
  }

  *bWasFound = false;
  *nFoundIndex = 0;

  // exit if search string is larger than size of buffer
  if ((nStartIndex + nStringLength) > pPage->nSize)
  {
    return 0;
  }

  // search starting at nStartIndex and end at (buffer size - length of search string)
  for (SIZE_T i = nStartIndex; i < (pPage->nSize - nStringLength); i++)
  {
    SIZE_T x;
    for (x = 0; x < nStringLength; x++)
    {
      // compare each byte of search string
      if (pPage->pcBuffer[i+x] != pSearch[x])
        break;
    }

    // return true if all bytes matched
    if (x == nStringLength)
    {
      *bWasFound = true;
      *nFoundIndex = i;
      return 0;
    }
  }

  return 0;
}

int ADD_CALL mem_page_update_from_process(mem_page_t *pPage, proc_info_t *pProcInfo)
{
  uint32_t bytes_remaining;
  uint32_t reads_required;

  if (pPage == NULL)
  {
      debug_error("Updating null page");
      return -EINVAL;
  }

  if (pPage->pcBuffer == NULL)
  {
      debug_error("Updating with null buffer");
      return -EINVAL;
  }

  if (pProcInfo == NULL)
  {
      debug_error("Updating with null pointer to process info");
      return -EINVAL;
  }

  reads_required = pPage->nSize / MEM_PAGE_READ_SZ;
  for (uint32_t read_it = 0; read_it < reads_required; read_it++)
  {
    uint32_t current_byte = read_it * MEM_PAGE_READ_SZ;

    if (ReadProcessMemory(pProcInfo->hProcess, (pPage->lpBaseAddr + current_byte), &pPage->pcBuffer[current_byte], MEM_PAGE_READ_SZ, NULL) == 0)
    {
      //MEMORY_BASIC_INFORMATION memInfo;

      debug_verbose("Fail copying byte %u at address 0x%X", current_byte, (uint32_t)(pPage->lpBaseAddr + current_byte));
      debug_print_last_win_error();

#if 0
      // query memory flags for this address
      if (VirtualQueryEx(pProcInfo->hProcess, (pPage->lpBaseAddr + current_byte), &memInfo, sizeof(memInfo)) == 0)
      {
        debug_verbose("Fail to get virtualQueryEx information: 0x%X", (uint32_t)(pPage->lpBaseAddr + current_byte));
      }
      else
      {
        debug_print_mem_basic_flags(&memInfo);
      }
#endif

      return -ENXIO;
    }
  }

  // copy remaining bytes
  if ((bytes_remaining = (pPage->nSize % MEM_PAGE_READ_SZ)) > 0)
  {
    uint32_t current_byte = reads_required * MEM_PAGE_READ_SZ;

    if (ReadProcessMemory(pProcInfo->hProcess, (pPage->lpBaseAddr + current_byte), &pPage->pcBuffer[current_byte], bytes_remaining, NULL) == 0)
    {
      //MEMORY_BASIC_INFORMATION memInfo;

      debug_verbose("fail copying byte %u at address 0x%X", current_byte, (uint32_t)(pPage->pcBuffer + current_byte));
      debug_print_last_win_error();

#if 0
      // query memory flags for this address
      if (VirtualQueryEx(pProcInfo->hProcess, (pPage->lpBaseAddr + current_byte), &memInfo, sizeof(memInfo)) == 0)
      {
        debug_verbose("Fail to get virtualQueryEx information: 0x%X", (uint32_t)(pPage->lpBaseAddr + current_byte));
      }
      else
      {
        debug_print_mem_basic_flags(&memInfo);
      }
#endif

      return -ENXIO;
    }
  }
  return 0;
}

void ADD_CALL mem_page_print_addr_sz(mem_page_t *pPage)
{
  if (pPage == NULL)
  {
    printf("Printing NULL page\n");
    return;
  }

  printf("pPage->lpBaseAddr = 0x%08X\n", (uint32_t)pPage->lpBaseAddr);
  printf("pPage->nSize = %lu\n", pPage->nSize);
  printf("pPage->pcBuffer = 0x%08X\n", (uint32_t)pPage->pcBuffer);
}
