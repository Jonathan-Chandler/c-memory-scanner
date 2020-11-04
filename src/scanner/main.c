#include <windows.h>
#include "debug.h"
#include "memscan.h"
#include "memblock.h"
#include "cli.h"

int main(int argc, char *argv[])
{
  procInfo_t *procInfo;
  int rc;
  uint32_t value = 997738607;

  if (argc == 1)
  {
    printf("Expected process name: %s <process_name>", argv[0]);
  }

  initialize(&procInfo, argv[1]);

  rc = create_block_list(procInfo);
  if (rc != 0)
    printf("rc: %d\n", rc);

  rc = update_block_list(procInfo);
  if (rc != 0)
    printf("rc: %d\n", rc);

  search_block_list(procInfo, (uint8_t*)&value, sizeof(value));

  dump_scan_results(procInfo);

  destroy(&procInfo);

  cli_main(argv[1]);

  return 0;
}

// VirtualQueryEx
// ReadProcessMemory
// WriteProcessMemory
