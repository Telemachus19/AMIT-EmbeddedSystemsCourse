#include <stdlib.h>
typedef struct Stack
{
    int data;
    struct Stack *next;
} stack;

stack *createStack(int data)
{
    stack *head;
    head = (stack *)malloc(sizeof(stack));
    if (head == NULL)
    {
        printf("\nOut Of Memory :(");
    }
    head->data = data;
    head->next = NULL;
    return head;
}

void push(stack *head, int data)
{
    stack *new_node = (stack *)malloc(sizeof(stack));
    stack *last = head;

    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}
void traversal_stack(stack *head)
{
    stack *current = head;
    printf("[");
    while (current->next != NULL)
    {
        printf("%d,", current->data);
        current = current->next;
    }
    printf("%d]\n", current->data);
}
int pop(stack *head)
{
    int data;
    if (head == NULL)
        return INT_MAX;

    if (head->next == NULL)
    {
        data = head->data;
        free(head);
        return data;
    }

    // Find the second last node
    stack *second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    // Save Value
    data = second_last->next->data;
    // Delete last node
    free(second_last->next);

    // Change next of second last
    second_last->next = NULL;

    return data;
}