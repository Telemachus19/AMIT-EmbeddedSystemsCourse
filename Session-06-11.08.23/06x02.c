#include <stdio.h>
#define SET(x, n) (x | (1 << n))
#define CLEAR(x, n) (x & (~(1 << n)))
#define TOGGLE(x, n) (x ^ (1 << n))

int main()
{
    int y = 0;
    printf("%d\n", y);
    y = SET(y, 3);
    printf("%d\n", y);
}