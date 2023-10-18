#include <stdlib.h>
#include <stdio.h>
#include "../headers/SDB.h"
#define MAX 10 // Maximum number of students in the database.
#define MIN 3  // Minimum number of students in the database.
static student *head_ref = NULL;
static int count = 0; // keeping the count of number of students in the database.

bool SDB_isFull()
{
    return (count >= MAX) ? true : false;
}
uint8 SDB_GetUsedSize()
{
    return count;
}
bool SDB_DoesIdExist(uint32 id)
{
    student *current = head_ref;

    while (current != NULL)
    {
        if (current->Student_ID == id)
            return true;
        current = current->next;
    }

    return false;
}
bool SDB_AddEntry()
{
    // If the database is already complete return false.
    if (SDB_isFull())
    {
        printf("The database is complete\n");
        return false;
    }
    uint32 newStudentID;
    printf("Enter the new student id: ");
    scanf("%d", &newStudentID);

    if (SDB_DoesIdExist(newStudentID))
    {
        printf("The student ID does already exist.\n");
        return false;
    }

    student *newStudent = (student *)malloc(sizeof(student));

    newStudent->Student_ID = newStudentID;
    newStudent->next = NULL;

    printf("Enter the student's school year: ");
    scanf("%d", &(newStudent->Student_year));

    for (int i = 0; i < IDS; i++)
    {
        printf("Enter the course %d ID: ", (i + 1));
        scanf("%d", &(newStudent->Course_ID[i]));

        printf("Enter the course %d grade: ", (i + 1));
        scanf("%d", &(newStudent->Course_grade[i]));
    }

    if (head_ref == NULL)
    {
        head_ref = newStudent;
        count++;
        printf("Student added, current number of students : %d\n", count);
        return true;
    }

    student *last = head_ref;

    while (last->next != NULL)
        last = last->next;
    last->next = newStudent;

    count++;
    printf("Student added, current number of students : %d\n", count);
    return true;
}
void SDB_DeleteEntry(uint32 id)
{
    if (count <= 3)
    {
        printf("The database must a minimum of 3 students\n Can't complete the operation.\n");
        return;
    }
    student *temp = head_ref, *prev;

    if (temp != NULL && temp->Student_ID == id)
    {
        head_ref = temp->next;
        free(temp);
        return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->Student_ID != id)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present
    if (temp == NULL)
        return;

    // Remove the node
    prev->next = temp->next;

    free(temp);
}
bool SDB_ReadEntry(uint32 id)
{
    student *current = head_ref;

    while (current != NULL)
    {
        if (current->Student_ID == id)
        {
            printf("Student found... printing the info...\n");
            printf("Student's ID : %d\n", current->Student_ID);
            printf("Student's school year : %d\n", current->Student_year);
            for (int i = 0; i < IDS; i++)
            {
                printf("Course %d ID: %d\n", (i + 1), current->Course_ID[i]);
                printf("Course %d grade: %d\n", (i + 1), current->Course_grade[i]);
            }
            return true;
        }
        current = current->next;
    }
    return false;
}
void SDB_GetList(uint8 *count, uint32 *list)
{
    *count = 0;
    student *temp = head_ref;
    while (temp != NULL)
    {
        list[*count] = temp->Student_ID;
        *count = *count + 1;
        temp = temp->next;
    }
}
