#include <errno.h>
#include <stdio.h>
#include "memory_page.h"
#include "debug.h"


#define MEMORY_PAGE_BUFFER_WRITE_SIZE 1024          // number of bytes to write at once when saving a page         
#define MEMORY_PAGE_BUFFER_READ_SIZE  1024          // number of bytes to read at once when loading a saved page

// create buffer to store page
int mem_page_init(mem_page_t **pPage, SIZE_T nSize)
{
  mem_page_t *pRetPage;
  char *pBuf;

  if (pPage == NULL)
  {
    debug_error("Null return page pointer");
    return -EINVAL;
  }
  *pPage = NULL;

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
  *pPage = pRetPage;

  return 0;
}

int mem_page_destroy(mem_page_t **ppMemPage)
{
  mem_page_t *pPage;
  char *pcBuffer;

  if (ppMemPage == NULL)
  {
    debug_error("Null pointer to page");
    return -EINVAL;
  }

  pPage = *ppMemPage;
  if (pPage == NULL)
  {
    debug_error("Deallocating NULL page");
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
  }

  free(pPage);

  // set pointer to destroyed page as null
  *ppMemPage = NULL;

  return 0;
}

bool mem_page_is_valid(mem_page_t *page)
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

int mem_page_save(const mem_page_t *pMemPage, const char *pszFileName)
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

int mem_page_load(mem_page_t **ppMemPage, const char *pszFileName)
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
  *ppMemPage = NULL;

  mem_page_destroy(&pRetPage);

  if (pFile)
    fclose(pFile);
  return -EBADF;
}

int mem_page_search(mem_page_t *pPage, const SIZE_T nStringLength, const char *pSearch, SIZE_T nStartIndex, bool *bWasFound, SIZE_T *nFoundIndex)
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

