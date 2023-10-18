#include <stdio.h>
int add(int, int);
int max(int, int);
int main(void)
{
    int x = 1, y = 2;
    printf("%d\n", add(1, 2));
    printf("%d\n", max(x, y));
}

int add(int a, int b)
{
    return a + b;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}