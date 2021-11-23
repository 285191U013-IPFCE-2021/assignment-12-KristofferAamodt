#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H

#ifndef QUEUE_MAX_SIZE
#define QUEUE_MAX_SIZE 10
#endif

typedef struct
{
    int next_index;
    int array[QUEUE_MAX_SIZE];
} Queue;

// Note that in c it is common to prefix libary code with a prefix to avoid name clashes
// In this case we add "queue" in front to signal the relationship of this method to the queue
// data structure

void queue_initialize(Queue* q);
void queue_enqueue(Queue* q, int value);
int queue_dequeue(Queue* q);
bool queue_is_empty(Queue* q);
bool queue_is_full(Queue* q);

#endif