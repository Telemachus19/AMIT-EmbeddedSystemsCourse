#include <stdlib.h>

typedef struct Queue
{
    int data;
    struct Queue *next;
} queue;

queue *createQueue(int data)
{
    queue *head;
    head = (queue *)malloc(sizeof(queue));
    if (head == NULL)
    {
        printf("\nOut Of Memory :(");
    }
    head->data = data;
    head->next = NULL;
    return head;
}

void enqueue(queue **head, int data)
{
    queue *new_node = (queue *)malloc(sizeof(queue));
    queue *last = *head;

    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}
int dequeue(queue **head)
{
    if (*head == NULL)
        return INT_MAX;
    int data = (*head)->data;
    queue *temp = *head;
    *head = (*head)->next;
    temp->next = NULL;
    free(temp);
    return data;
}
void traversal_queue(queue *head)
{
    queue *current = head;
    if (current == NULL)
    {
        printf("The Queue is empty\n");
        exit(0);
        return;
    }
    printf("[");
    while (current->next != NULL)
    {
        printf("%d,", current->data);
        current = current->next;
    }
    printf("%d]\n", current->data);
}