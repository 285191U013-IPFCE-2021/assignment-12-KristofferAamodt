#include "queue.h"
#include <assert.h>
#include <stdio.h>

int main()
{
    Queue q;
    queue_initialize(&q);

    assert(queue_is_empty(&q));
    assert(!queue_is_full(&q));

    for (int i = 0; i < QUEUE_MAX_SIZE; ++i)
    {
        queue_enqueue(&q, i);
        assert(!queue_is_empty(&q));
    }

    assert(queue_is_full(&q));

    for (int i = 0; i < QUEUE_MAX_SIZE; ++i)
    {
        assert(queue_dequeue(&q) == i);
    }

    assert(queue_is_empty(&q));
}