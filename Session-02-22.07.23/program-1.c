#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter the a number: ");
    scanf("%d", &number);
    printf("shift left: %d\n", number << 1);
    printf("shift right by 2: %d\n", number >> 2);
    return 0;
}