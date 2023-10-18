/*
 ============================================================================
 Name        : Lab01.c
 Author      : AMIT Learning
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes 2 input numbers from the user,
 and prints the following:
 + First Number
 + Second Number
 + Addition Result
 + Subtraction Result
 + Multiplication Result
 + Division Result
 + Remainder Result
 Use proper displaying statement for each displayed value
 ============================================================================
*/

#include <stdio.h>

int main ()
{
    int input_1, input_2;

    printf("Please enter 2 numbers.\n");

    scanf("%d", &input_1);
    scanf("%d", &input_2);

    printf("The addition result of the number is %d.\n", input_1 + input_2);
    printf("The subtraction result of the number is %d.\n", input_1 - input_2);
    printf("The multiplication result of the number is %d.\n", input_1 * input_2);
    printf("The division result of the number is %d.\n", input_1 / input_2);
    printf("The remainder result of the number is %d.\n\n", input_1 % input_2);


    return 0;
}
