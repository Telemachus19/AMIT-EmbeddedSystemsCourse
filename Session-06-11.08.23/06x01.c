#include <stdio.h>
#define VALUE 15
#define SUM(a, b) a + b
#define MULT(a, b) a *b
int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    if (x < VALUE && y < VALUE)
    {
        printf("x + y = %d\n", SUM(x, y));
        printf("x * y = %d\n", MULT(x, y));
        printf("(x+y)*x = %d\n", MULT(SUM(x, y), x));
    }
    else
    {
        printf("Both of the values must be less than %d\n", VALUE);
    }

    return 0;
}