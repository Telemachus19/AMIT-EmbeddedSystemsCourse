#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(int data)
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("\nOut Of Memory :(");
    }
    head->data = data;
    head->next = NULL;
    return head;
}

void insert_begin(struct node **head, int d)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = d;
    if (*head == NULL)
    {
        new_node->next = NULL;
        *head = new_node;
        return;
    }
    new_node->next = (*head);
    (*head) = new_node;
}
void insert_end(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *last = *head; /* used in step 5*/

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
void traversal(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d\t", current->data);
        current = current->next;
    }
    printf("\n");
}
void insert_after_position(struct node **head, int pos, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    if ((*head) == NULL)
    {
        new_node->next = NULL;
        (*head) = new_node;
        return;
    }
    struct node *prev = (struct node *)malloc(sizeof(struct node));
    prev = (*head);
    if (pos == 0)
    {
        new_node->next = (*head);
        (*head) = new_node;
        return;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            prev = prev->next;
            if (prev == NULL)
            {
                return;
            }
        }
    }
    if (prev->next != NULL)
    {
        new_node->next = prev->next;
        prev->next = new_node;
    }
    else
    {
        prev->next = new_node;
    }
}
int main(void)
{
    printf("Hello, world!\n");
    struct node *head = create(0);
    insert_end(&head, 1);
    // insert_end(&head, 1);
    insert_end(&head, 2);
    insert_end(&head, 3);
    insert_end(&head, 4);
    insert_end(&head, 5);
    insert_after_position(&head, 5, 100);
    traversal(head);
    return 0;
}