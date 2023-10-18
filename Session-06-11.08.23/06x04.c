#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 5, b = 6;
    printf("%d\n", sum(a, b));
    int (*p)(int, int);
    p = sum;
    printf("%d\n", p(a, b));
    return 0;
}