#include <stdio.h>
int bitToggle(int a, int n)
{
    return (a ^ (1 << (n)));
}
int main(void)
{
    int n = 0, position = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Enter the nth bit to be toggled (0-31): ");
    scanf("%d", &position);
    printf("Number before toggling 1 bit: %d (in decimal)\n", n);
    printf("Number after toggling 1 bit: %d (in decimal)\n", bitToggle(n, position));
    return 0;
}