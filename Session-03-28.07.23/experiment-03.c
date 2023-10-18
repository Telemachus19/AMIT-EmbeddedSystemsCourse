/*
    Enabling a bit
*/
#include <stdio.h>
int main(void)
{
    int x = 8;
    printf("%d\n", x);
    // Enabling the 3 bit
    x = x | (1 << 2);
    printf("%d\n", x);
    // Disabling the 3rd bit
    x = x & (~(1 << 2));
    // disabling the 4th bit.
    x = x & (~(1 << 3));
    printf("%d\n", x);
    // toggling using xor
    x = x ^ (1 << 3);
    printf("%d\n", x);
    x = x ^ (1 << 3);
    printf("%d\n", x);
    return 0;
}