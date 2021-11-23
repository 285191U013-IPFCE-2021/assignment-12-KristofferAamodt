#ifndef QUEUE_H
#define QUEUE_H

#ifndef QUEUE_MAX_SIZE
#define QUEUE_MAX_SIZE 10
#endif

// Contrary to plain C function names are scoped to the class
// As such multiple datastructures may define functions with
// identical names. During compilations the names such that
// they become unique, in a process called name "mangling".
// For example enqueue becomes _ZN5Queue7dequeueEv
// Try it out for yourself with "gcc -c queue.cpp && nm queue.o"

class Queue
{
private:
    int next_index;
    int array[QUEUE_MAX_SIZE];
public:
    void enqueue(int value);
    int dequeue();
    bool is_empty();
    bool is_full();
};
#endif
