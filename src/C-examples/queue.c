#include <stddef.h>
#include <assert.h>

#include "queue.h"

void queue_initialize(Queue *q)
{
    q->next_index = 0;
}

bool queue_is_empty(Queue *q)
{
    return q->next_index == 0;
}

bool queue_is_full(Queue *q)
{
    return q->next_index == QUEUE_MAX_SIZE;
}

void queue_enqueue(Queue *q, int value)
{
    assert(!queue_is_full(q));
    q->array[q->next_index++] = value;
}

int queue_dequeue(Queue *q)
{
    assert(!queue_is_empty(q));

    int value = q->array[0];

    for (int i = 1; i < q->next_index; ++i)
    {
        q->array[i - 1] = q->array[i];
    }
    --q->next_index;
    return value;
}
