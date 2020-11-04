#include <time.h>
#include <windows.h>
#include <stdio.h>

int main(void)
{
//  char c;
  DWORD pid = GetCurrentProcessId();
  int ms_elapsed;
  int seconds_elapsed = 0;
  clock_t start_time;
  printf("PID: 0x%08lx\n", pid);

  // wait 10 seconds
  start_time = clock();
  do 
  {
    clock_t time_difference = clock() - start_time;
    ms_elapsed = time_difference * 1000 / CLOCKS_PER_SEC;

    if (ms_elapsed/1000 > seconds_elapsed)
    {
      seconds_elapsed = ms_elapsed/1000;
      printf("seconds elapsed: %d\n", seconds_elapsed);
    }
  } while (ms_elapsed < 10000);

  return 0;
}
