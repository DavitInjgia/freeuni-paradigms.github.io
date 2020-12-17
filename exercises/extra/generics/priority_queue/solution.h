#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <assert.h>

typedef struct{
  void * elems;
  int * priorities;
  int log_len;
  void (*freeFn)(void *);
  int elem_size;
}PQueue;

//Initialize priority queue.
void PQueueNew(PQueue * p, int elem_size, void (*freeFn)(void *));

//Push element at the correct position.
void PQueuePush(PQueue * p, void * elem, int priority);

//Pop first element from the priority queue.
void PQueuePop(PQueue * p, void * elem);

//Free all allocated memory.
void PQueueDispose(PQueue * p);
