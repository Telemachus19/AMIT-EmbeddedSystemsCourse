#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int n;
    bool isEven;
    printf("Enter the number: ");
    scanf("%d", &n);
    isEven = ((n >> 1) << 1) == n;

    printf("The number is odd = %d\n", !isEven);
    printf("The number is even = %d\n", isEven);
}
