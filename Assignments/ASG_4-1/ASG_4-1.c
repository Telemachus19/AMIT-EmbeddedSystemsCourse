#include <stdio.h>
#include <stdlib.h>
void readArray(int *arr, int n);
void printArray(int *arr, int n);
void edit(int *a);
void editArrayOW(int *a, int n);
void editArrayNOW(int *a, int n);
void separator(int);
int main(void)
{
    int x = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Before calling edit: %d\n", x);
    edit(&x);
    printf("After calling edit: %d\n", x);
    // -------------------------------------------
    separator(20);

    // No overwrite
    int n = 0;
    printf("Enter the number of values to be stored: ");
    scanf("%d", &n);
    int *y = malloc(sizeof(int) * n);
    readArray(y, n);
    printf("Before calling edit: ");
    printArray(y, n);
    printf("After calling edit: ");
    editArrayNOW(y, n);
    printf("The original Array: ");
    printArray(y, n);
    return 0;
}
void separator(int n)
{
    for (int i = 0; i < n; i++)
        printf("-");
    printf("\n");
}
void readArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void printArray(int *arr, int n)
{
    printf("[");
    for (int i = 0; i < (n - 1); i++)
    {
        printf("%d,", arr[i]);
    }
    printf("%d]\n", arr[n - 1]);
}
void edit(int *a)
{
    *a += 1;
}
void editArrayOW(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] += 1;
    }
}
void editArrayNOW(int *a, int n)
{
    int t = 0;
    printf("[");
    for (int i = 0; i < (n - 1); i++)
    {
        t = a[i] + 1;
        printf("%d,", t);
    }
    t = a[(n - 1)] + 1;
    printf("%d]\n", t);
}