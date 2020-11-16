#include <stdint.h>
#include <windows.h>
#include "debug.h"
#include "memory_scan.h"
#include "scan_results.h"
#include "cli.h"

int main(int argc, char *argv[])
{
  mem_scan_t *this_scan;
//  int rc;
//  uint32_t value = 997738607;
  uint32_t value = 55;

  if (argc == 1)
  {
    printf("Expected process name: %s <process_name>", argv[0]);
  }

  mem_scan_init(&this_scan, argv[1]);

  mem_scan_search(this_scan, sizeof(value), (uint8_t*) &value);

  mem_scan_print(this_scan);
  mem_scan_destroy(&this_scan);


//
//  rc = memscan_create(procInfo);
//  if (rc != 0)
//    printf("rc: %d\n", rc);
//
//  rc = memscan_update(procInfo);
//  if (rc != 0)
//    printf("rc: %d\n", rc);
//
//  memscan_search(procInfo, (uint8_t*)&value, sizeof(value));
//
//  memscan_dump_results(procInfo);
//
//  memscan_destroy(&procInfo);
//
//  cli_main(argv[1]);
//
  return 0;
}

// VirtualQueryEx
// ReadProcessMemory
// WriteProcessMemory
