#include <stddef.h>
#include <assert.h>

#include "queue.hpp"

bool Queue::is_empty()
{
    return next_index == 0;
}

bool Queue::is_full()
{
    return next_index == QUEUE_MAX_SIZE;
}

void Queue::enqueue(int value)
{
    assert(!is_full());
    array[next_index++] = value;
}

int Queue::dequeue()
{
    assert(!is_empty());

    int value = array[0];

    for (int i = 1; i < next_index; ++i)
    {
        array[i - 1] = array[i];
    }
    --next_index;
    return value;
}
