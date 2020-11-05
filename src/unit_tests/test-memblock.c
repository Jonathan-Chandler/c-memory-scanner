#include "minunit.h"
#include "test-memblock.h"
#include "memscan.h"
#include "memblock.h"

const HANDLE TEST_H_PROCESS = (HANDLE) 0x4321ABCD;
const PVOID TEST_BASE_ADDR = (PVOID) 0x123;
const SIZE_T TEST_REGION_SIZE = 0x124;
const DWORD TEST_MEM_PROTECT = MEMINFO_PROTECT_IS_READABLE;
const DWORD TEST_MEM_STATE = MEM_COMMIT;

MEMORY_BASIC_INFORMATION test_mem_basic_info = {
  .BaseAddress = TEST_BASE_ADDR,
  .AllocationBase = 0,
  .AllocationProtect = 0,
//  .PartitionId = 0,
  .RegionSize = TEST_REGION_SIZE,
  .State = TEST_MEM_STATE,
  .Protect = TEST_MEM_PROTECT,
  .Type = 0,
};

mblock_t *test_block;

char* test_all_memblock()
{
  mu_run_test(test_memblock_init);
  mu_run_test(test_memblock_destroy);

  return 0;
}

char* test_memblock_init()
{
  test_block = create_memblock(TEST_H_PROCESS, &test_mem_basic_info);
  mu_assert("Unit Test Error: memblock init failed", test_block != 0);
  return 0;
}

char* test_memblock_destroy()
{
  destroy_memblock(&test_block);
  mu_assert("Unit Test Error: memblock destroy failed", test_block == 0);
  return 0;
}

char* test_memblock_search()
{
//  int res;
//  char test_buffer[] = {0x0, 0x1};
//
//  res = search_block(mblock_t *current_block, uint8_t *value, int value_size);
//  mu_assert("Unit Test Error: memblock search failed", initialize(&procInfo, "test_application") == 0);
  return 0;
}

