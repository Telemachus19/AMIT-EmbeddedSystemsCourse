#include "headers/Queue.h"
#include "headers/Stack.h"
#include <stdio.h>
int main()
{
    stack *a = createStack(0);
    queue *b = createQueue(0);
    for (int i = 1; i < 10; i++)
    {
        enqueue(&b, i);
    }
    traversal_queue(b);
    int d = dequeue(&b);
    printf("\n%d\n", d);
    traversal_queue(b);
    for (int i = 1; i < 10; i++)
    {
        push(a, i);
    }
    traversal_stack(a);
    d = pop(a);
    printf("\n%d\n", d);
    traversal_stack(a);
}