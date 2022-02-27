//#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>

void *threadTest(void *pVar)
{
    sleep(1);
    int x[20];
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
      x[i] = i*19;
    }

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
      printf("Printing %d GeeksQuiz from Thread \n", x[i]);
    }

    return NULL;
}

int main(void) 
{
  pthread_t thread_id[50] = {0};
  pthread_t thread_id2[50] = {0};

  while (1)
  {
    // create threads
    for (int i = 0; i < sizeof(thread_id)/sizeof(thread_id[0]); i++)
    {
      pthread_create(&thread_id[i], NULL, threadTest, NULL);
    }

    // create more threads
    for (int i = 0; i < sizeof(thread_id2)/sizeof(thread_id2[0]); i++)
    {
      pthread_create(&thread_id2[i], NULL, threadTest, NULL);
    }

    for (int i = 0; i < sizeof(thread_id)/sizeof(thread_id[0]); i++)
    {
      pthread_join(thread_id[i], NULL);
    }

    for (int i = 0; i < sizeof(thread_id2)/sizeof(thread_id2[0]); i++)
    {
      pthread_join(thread_id2[i], NULL);
    }
    sleep(10);
  }

  getchar();

  return 0;
}
