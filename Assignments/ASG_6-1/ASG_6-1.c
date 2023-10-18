#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student
{
    char *name;
    int age;
    int degree;
    int section;
} student;
void printStudentData(student s);
void printStudents(student s[], int n);
char *getln();
int main()
{
    int n = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getc(stdin);
    student *s = (student *)malloc(n * sizeof(student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter data of Student %d\n", (i + 1));
        printf("Enter the name of student: ");
        s[i].name = getln();
        printf("Enter the age of the student: ");
        scanf("%d", &s[i].age);
        printf("Enter the degree of the student: ");
        scanf("%d", &s[i].degree);
        printf("Enter the section of the student: ");
        scanf("%d", &s[i].section);
        getc(stdin);
    }
    printStudents(s, n);
}
char *getln()
{
    int size = 2, i = 0;
    char *str = (char *)malloc(size * sizeof(char));
    char c;
    while (true)
    {
        c = getc(stdin);
        if (c == '\n' || c == EOF)
            break;
        if (size <= i)
        {
            size *= 2;
            str = realloc(str, size);
        }
        str[i++] = c;
    }
    str[i] = '\0';
    return str;
}
void printStudentData(student s)
{
    printf("Name:     %s\n", s.name);
    printf("Age:      %d\n", s.age);
    printf("Degree:   %d\n", s.degree);
    printf("Section:  %d\n", s.section);
}
void printStudents(student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\tStudent %d\n\n", (i + 1));
        printStudentData(s[i]);
        printf("\n");
    }
}