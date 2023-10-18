#include <stdio.h>
#include "../headers/SDB.h"

typedef enum
{
    EXIT,
    ADDENTRY,
    SIZE_DB,
    READ_ID,
    LIST_ID,
    CHECK_ID,
    DELETE_ENTRY,
    IS_DB_FULL
} CHOICE;
void SDB_action(uint8 choice);

void SDB_APP()
{
    uint8 choice; // Variable to store user's choice

    while (1) // Main menu
    {
        // Print the menu options
        printf("\n");
        printf("1. To add entry\n");
        printf("2. To get used size in database, enter 2\n");
        printf("3. To read student data, enter 3 \n");
        printf("4. To get the list of all student IDs, enter 4 \n");
        printf("5. To check if ID exists, enter 5 \n");
        printf("6. To delete student data, enter 6 \n");
        printf("7. To check if database is full, enter 7\n");
        printf("Enter 0 to exit\n");
        printf("Enter your choice: ");
        scanf("%hhu", &choice); // Read user's choice
        printf("\n");

        if (choice == EXIT)
        {
            break; // Exit the loop if user chooses to exit
        }

        SDB_action(choice); // Call the function to perform the selected action
    }
}

void SDB_action(uint8 choice)
{
    uint32 studentID; // Variable to store student ID
    uint8 count;      // Variable to store count or size
    uint32 list[10];  // Array to store list of student IDs

    switch (choice)
    {
    case ADDENTRY:
        SDB_AddEntry(); // Call function to add an entry
        break;

    case SIZE_DB:
        count = SDB_GetUsedSize(); // Get the used size in the database
        printf("Used size in database: %d\n", count);
        break;

    case READ_ID:
        printf("Enter Student ID: ");
        scanf("%d", &studentID);
        if (!(SDB_ReadEntry(studentID)))
            printf("The student was not found.\n");
        break;

    case LIST_ID:
        SDB_GetList(&count, list); // Get the list of all student IDs
        printf("List of all student IDs:\n");
        for (int i = 0; i < count; i++)
        {
            printf("%d", list[i]);
            if (i < count - 1)
            {
                printf(", ");
            }
        }
        printf("\n");
        break;
    case CHECK_ID:
        printf("Enter Student ID: ");
        scanf("%u", &studentID);
        (SDB_DoesIdExist(studentID)) ? printf("\nStudent ID %d exists in the database.\n", studentID) : printf("Student ID %d does not exist in the database.\n", studentID);
        break;

    case DELETE_ENTRY:
        printf("Enter Student ID to delete: ");
        scanf("%u", &studentID);
        SDB_DeleteEntry(studentID); // Delete student data for a given ID
        break;

    case IS_DB_FULL:
        (SDB_isFull()) ? printf("The database is full\n") : printf("The database is not full\n");
        break;
    default:
        printf("Invalid choice.\n"); // Display error for an invalid choice
        break;
    }
}