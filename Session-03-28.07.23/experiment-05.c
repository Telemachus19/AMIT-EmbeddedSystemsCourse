#include <stdio.h>
int main()
{
    int x = 5;
    int sum = 0;
    while (x > 0)
        sum += x--;
    printf("%i\n", sum);
}