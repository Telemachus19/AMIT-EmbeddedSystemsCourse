#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Complex
{
    double real;
    double img;
} complex;
void present(complex a);
complex add(complex a, complex b);
char *getln();
int main()
{
    complex a, b;
    printf("For 1st complex number\n");
    printf("Enter the real and imaginary number respectively: ");
    scanf("%lf", &a.real);
    scanf("%lf", &a.img);
    printf("For 2nd complex number\n");
    printf("Enter the real and imaginary number respectively: ");
    scanf("%lf", &b.real);
    scanf("%lf", &b.img);
    complex c = add(a, b);
    printf("Sum = ");
    present(c);
    printf("\n");
}

void present(complex a)
{
    printf("%.2lf + %.2lfi", a.real, a.img);
}
complex add(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}