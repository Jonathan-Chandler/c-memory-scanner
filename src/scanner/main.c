#include <stdint.h>
#include <windows.h>
#include "debug.h"
#include "process_info.h"
#include "memory_page.h"
#include "memory_manager.h"

int main(int argc, char *argv[])
{
  int rc;
  debug_level = DEBUG_LOG_VERBOSE;
  proc_info_t *pProcessInfo;
  mem_mgr_t *pGameData;
  //char *pszGameName = "sacrifice.exe";
  char *pszGameName = "DarkStone DSI";

  if ((rc = proc_info_init(&pProcessInfo, pszGameName)) != 0)
  {
    debug_error("Failed to get process info with error %d", rc);
    return rc;
  }
  
  if ((rc = mem_mgr_init(&pGameData)) != 0)
  {
    debug_error("Failed to init memory manager with error %d", rc);
    goto destroy_exit;
  }

  if ((rc = mem_mgr_load_proc(pGameData, pProcessInfo)) != 0)
  {
    debug_error("Failed to load process with error %d", rc);
    goto destroy_exit;
  }

  mem_mgr_print_nodes(pGameData);

destroy_exit:
  if ((rc = mem_mgr_destroy(&pGameData)) != 0)
    debug_error("Failed to destroy memory manager with error %d", rc);

  if ((rc = proc_info_destroy(&pProcessInfo)) != 0)
    debug_error("Failed to deallocate process info with error %d", rc);
  
//  uint32_t value = 55;
//  mem_page_t *this_page;
//
//  if (argc == 1)
//  {
//    printf("Expected process name: %s <process_name>", argv[0]);
//    exit(-1);
//  }

  //mem_page_init(&this_page, value);

  return rc;
}

// VirtualQueryEx
// ReadProcessMemory
// WriteProcessMemory
