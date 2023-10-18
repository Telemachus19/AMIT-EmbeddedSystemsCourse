#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main(void)
{
    int n;
    printf("Enter The number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < (n - 1); i++)
        printf("%d,", fib(i));
    printf("%d\n", fib(n - 1));
    return 0;
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}