#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main(void)
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Before swapping\n");
    printf("x = %d \t y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping\n");
    printf("x = %d \t y = %d\n", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}