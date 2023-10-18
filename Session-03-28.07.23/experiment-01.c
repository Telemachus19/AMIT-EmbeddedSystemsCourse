#include <stdio.h>
int main(void)
{
    int x = 4, z;
    z = sizeof(x++);          // A statement inside the sizeof function doesn't execute
    printf("%d\n%d\n", x, z); // The result is 4,4
    return 0;
}