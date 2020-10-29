#include <stdio.h>
#include <stdint.h>

#include "cli.h"
#include "memscan.h"
#include "memblock.h"

#define CLI_EXIT        0
#define CLI_NEW_SEARCH  1
#define CLI_FILTER      2
#define CLI_PRINT       3

#define CLI_BUFFER_SIZE 255

int get_value(uint8_t *value, int *size);

int cli_main(char *window_title)
{
  uint8_t value[8] = {0};
  int size = 0;
  int retval;
//  char size_buffer[CLI_BUFFER_SIZE];
//  char value_buffer[CLI_BUFFER_SIZE];
  int selection = -1;
  procInfo_t *procInfo = NULL;

  if ((retval = initialize(&procInfo, window_title)) != 0)
    return retval;

  while (selection != CLI_EXIT)
  {
    printf("Make a selection\n");
    printf("0: Exit\n");
    printf("1: New search\n");
    printf("2: Filter search\n");
    printf("3: Print search results\n");

    // get selection
    scanf("%d", &selection);
    printf("selection: %d\n", selection);

    switch (selection)
    {
      case CLI_EXIT:
        break;

      case CLI_NEW_SEARCH:
//        if (procInfo != 0)
//        {
//          destroy_block_list(&procInfo);
//        }

        if ((retval = create_block_list(procInfo)) != 0)
          return retval;
        break;

      case CLI_FILTER:
        if ((retval = get_value(value, &size)) != 0)
          return retval;

        if ((retval = update_block_list(procInfo)) != 0)
          return retval;
        
        if ((retval = search_block_list(procInfo, value, size)) != 0)
          return retval;
        break;

      case CLI_PRINT:
        dump_scan_results(procInfo);
        break;

      default:
        break;
    }

  }
  return 0;
}

int get_value(uint8_t *value, int *size)
{
  uint32_t temp_value;
//  printf("Enter value length in bytes: ");
//  fgets(size_buffer, CLI_BUFFER_SIZE, stdin);
//  printf("Enter value: ");
//  gets(value_buffer, CLI_BUFFER_SIZE, stdin);
//  printf("value_sz = %s\n", size_buffer);
//  printf("value = %s\n", value_buffer);
  printf("Enter value length in bytes: ");
  scanf("%d", size);

  printf("Enter value: ");
  scanf("%d", &temp_value);

  memcpy(value, &temp_value, *size); 

  return 0;
}
