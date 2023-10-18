#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int powi(int n, int pow);
int countDigits(int n);
bool armstrong(int n);
int main(void)
{
    int n = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    armstrong(n) ? printf("Armstrong Number") : printf("Not armstrong number");
    printf("\n");
    return 0;
}

int powi(int n, int pow)
{
    int result = 1;
    for (int i = 0; i < pow; i++)
        result *= n;
    return result;
}
int countDigits(int n)
{
    int digits = 0;
    n = (n < 0) ? -n : n;
    while (n > 0)
    {
        n /= 10;
        digits++;
    }
    return digits;
}
bool armstrong(int n)
{
    int power = countDigits(n), armnum = 0, i = 0, temp_n = n;
    // printf("power = %d\n", power);
    int *digits = (int *)malloc(power * sizeof(int));
    while (temp_n > 0)
    {
        digits[i] = temp_n % 10;
        i++;
        temp_n /= 10;
    }
    // printf("[");
    // for (int j = 0; j < (power - 1); j++)
    // {
    //     printf("%d,", digits[j]);
    // }
    // printf("%d]\n", digits[power - 1]);
    for (int j = 0; j < power; j++)
    {
        armnum += powi(digits[j], power);
    }
    // printf("armnum = %d\n", armnum);
    return (armnum == n);
}
