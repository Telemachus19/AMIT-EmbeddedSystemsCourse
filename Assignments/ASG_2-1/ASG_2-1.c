#include <stdio.h>

int main(void)
{
    char operator;
    int n1, n2;

    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("The result = ");
    switch (operator)
    {
    case '+':
        printf("%d", n1 + n2);
        break;
    case '-':
        printf("%d", n1 - n2);
        break;
    case '*':
        printf("%d", n1 * n2);
        break;
    case '/':
        printf("%.2f", (float)n1 / n2);
        break;
    }
    printf("\n");
}