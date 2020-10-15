#include "memscan.h"
#include "memblock.h"
#include "debug.h"

//  HWND hWindow;
//  HANDLE hProcess;
//  DWORD proc_id;

// typedef struct _MEMORY_BASIC_INFORMATION {
//   PVOID  BaseAddress;
//   PVOID  AllocationBase;
//   DWORD  AllocationProtect;
//   WORD   PartitionId;
//   SIZE_T RegionSize;
//   DWORD  State;
//   DWORD  Protect;
//   DWORD  Type;
// } MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;

#define READ_PROCESS_MEMORY_SZ (1024*128)
// #define READ_PROCESS_MEMORY_SZ 2

mblock_t* create_memblock(HANDLE hProcess, MEMORY_BASIC_INFORMATION *meminfo)
{
  mblock_t *mb = malloc(sizeof(mblock_t));
  //char read_buffer[READ_PROCESS_MEMORY_SZ] = {0};
  //uint32_t bytes_read = 0;
  uint32_t bytes_remaining;
  uint32_t reads_required;

  if (mb == NULL)
  {
    debug_error("Unable to allocate mblock_t");
    return NULL;
  }

  mb->addr = meminfo->BaseAddress;
  mb->size = meminfo->RegionSize;
  mb->buffer = malloc(meminfo->RegionSize);
  mb->next = NULL;

  if (mb->buffer == 0)
  {
    free(mb);
    debug_error("Unable to allocate block size %lu", meminfo->RegionSize);
    return NULL;
  }

  // debug_verbose("hprocess: 0x%X - buffer 0x%X - size: %d", (uint32_t) hProcess, (uint32_t) mb->buffer, (uint32_t) mb->size);
  // debug_verbose("read %d bytes at starting addr 0x%X to buffer", (uint32_t) mb->size, (uint32_t) mb->addr);

  //debug_verbose("copy %u / %u", current_byte, mb->size);
  reads_required = mb->size / READ_PROCESS_MEMORY_SZ;
  for (uint32_t read_it = 0; read_it < reads_required; read_it++)
  {
    uint32_t current_byte = read_it * READ_PROCESS_MEMORY_SZ;
    //debug_verbose("copy %u / %u", current_byte, mb->size);

    if (ReadProcessMemory(hProcess, (mb->addr + current_byte), &mb->buffer[current_byte], READ_PROCESS_MEMORY_SZ, NULL) == 0)
    {
      LPVOID lpMsgBuf;
      DWORD dw = GetLastError();

      debug_verbose("fail copying byte %u at address 0x%X", current_byte, (uint32_t)(mb->addr + current_byte));
      debug_print_mem_basic_flags(meminfo);
      debug_error("Fail to read process memory: 0x%lX", GetLastError());
      FormatMessage(
          FORMAT_MESSAGE_ALLOCATE_BUFFER | 
          FORMAT_MESSAGE_FROM_SYSTEM |
          FORMAT_MESSAGE_IGNORE_INSERTS,
          NULL,
          dw,
          MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
          (LPTSTR) &lpMsgBuf,
          0, NULL );
      printf(lpMsgBuf);

      return NULL;
    }
  }

  // copy remaining bytes
  if ((bytes_remaining = (mb->size % READ_PROCESS_MEMORY_SZ)) > 0)
  {
    uint32_t current_byte = reads_required * READ_PROCESS_MEMORY_SZ;
    debug_verbose("copy remaining %u bytes: %u / %u", bytes_remaining, current_byte, mb->size);

    if (ReadProcessMemory(hProcess, (mb->addr + current_byte), &mb->buffer[current_byte], bytes_remaining, NULL) == 0)
    {
      //debug_verbose("DWORD: %u\n SIZE_T: %u", sizeof(DWORD), sizeof(SIZE_T));
      LPVOID lpMsgBuf;
      DWORD dw = GetLastError();
      debug_verbose("fail copying byte %u at address 0x%X", current_byte, (uint32_t)(mb->addr + current_byte));
      debug_error("Fail to read process memory: 0x%lX", GetLastError());
      FormatMessage(
          FORMAT_MESSAGE_ALLOCATE_BUFFER | 
          FORMAT_MESSAGE_FROM_SYSTEM |
          FORMAT_MESSAGE_IGNORE_INSERTS,
          NULL,
          dw,
          MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
          (LPTSTR) &lpMsgBuf,
          0, NULL );
      printf(lpMsgBuf);

      return NULL;
    }
  }

//  while (bytes_remaining != 0)
//  {
//    ReadProcessMemory(hProcess, mb->addr, mb->buffer, bytes_remaining, &bytes_read);
//    debug_verbose("bytes read: %u", bytes_read);
//    bytes_remaining -= bytes_read;
//    debug_verbose("bytes remaining: %u", bytes_read);
//  }

//    if (ReadProcessMemory(hProcess, mb->addr, mb->buffer, mb->size, NULL) == 0)
//    {
//      LPVOID lpMsgBuf;
//      DWORD dw = GetLastError();
//      debug_error("Fail to read process memory: 0x%lX", GetLastError());
//      FormatMessage(
//          FORMAT_MESSAGE_ALLOCATE_BUFFER | 
//          FORMAT_MESSAGE_FROM_SYSTEM |
//          FORMAT_MESSAGE_IGNORE_INSERTS,
//          NULL,
//          dw,
//          MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
//          (LPTSTR) &lpMsgBuf,
//          0, NULL );
//      printf(lpMsgBuf);
//    }
//  }
  

//    LPVOID lpMsgBuf;
//    LPVOID lpDisplayBuf;
//    DWORD dw = GetLastError();
//        FormatMessage(
//        FORMAT_MESSAGE_ALLOCATE_BUFFER | 
//        FORMAT_MESSAGE_FROM_SYSTEM |
//        FORMAT_MESSAGE_IGNORE_INSERTS,
//        NULL,
//        dw,
//        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
//        (LPTSTR) &lpMsgBuf,
//        0, NULL );
//
//    lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, 
//        (lstrlen((LPCTSTR)lpMsgBuf) + lstrlen((LPCTSTR)lpszFunction) + 40) * sizeof(TCHAR)); 
//
//    StringCchPrintf((LPTSTR)lpDisplayBuf, 
//        LocalSize(lpDisplayBuf) / sizeof(TCHAR),
//        TEXT("%s failed with error %d: %s"), 
//        lpszFunction, dw, lpMsgBuf); 
//    MessageBox(NULL, (LPCTSTR)lpDisplayBuf, TEXT("Error"), MB_OK); 
//
//    LocalFree(lpMsgBuf);
//    LocalFree(lpDisplayBuf);
//
//
//    free(mb->buffer);
//    free(mb);
//    return NULL;
//  }

  return mb;
}

void destroy_memblock(mblock_t **mb)
{
  if (mb == 0)
  {
    debug_error("mb is NULL");
    return;
  }

  if (*mb == 0)
  {
    debug_error("mb points to NULL address");
    return;
  }

  debug_verbose("deallocate address 0x%X", (uint32_t) ((*mb)->addr));

  if ((*mb)->buffer != 0)
    free((*mb)->buffer);

  free(*mb);

  *mb = NULL;
}

int memblock_read_buffer(HANDLE hProcess, mblock_t *mb)
{
  if (hProcess == 0)
  {
    debug_error("Invalid process handle");
    return -1;
  }

  if (mb == 0)
  {
    debug_error("Memory block is NULL");
    return -1;
  }

  if (mb->buffer == 0)
  {
    debug_error("Memory block buffer is NULL");
    return -1;
  }

  if (ReadProcessMemory(hProcess, mb->addr, mb->buffer, mb->size, NULL) == 0)
  {
    debug_error("Fail to read process memory");
    return -1;
  }

  return 0;
}


