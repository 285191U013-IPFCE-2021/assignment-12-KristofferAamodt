#include <assert.h>
#include <stdio.h>

#include "queue.hpp"

int main()
{
    Queue q;
    

    assert(q.is_empty());
    assert(!q.is_full());

    for (int i = 0; i < QUEUE_MAX_SIZE; ++i)
    {
        q.enqueue(i);
        assert(!q.is_empty());
    }

    assert(q.is_full());

    for (int i = 0; i < QUEUE_MAX_SIZE; ++i)
    {
        assert(q.dequeue() == i);
    }

    assert(q.is_empty());
}