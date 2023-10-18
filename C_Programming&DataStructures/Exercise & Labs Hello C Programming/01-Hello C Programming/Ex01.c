/*
 ============================================================================
 Author      : AMIT Learning
 Copyright   : AMIT Learning
 ========================================================
 Write a code that calculates the size of different data
 types
 =================output sample==========================
 Size of char data type = 1 Byte
 Size of int data type = 4 Bytes
 Size of float data type = 4 Bytes
 Size of double data type = 8 Bytes
 ============================================================================
 */

/* this code gets the size of different data types
 * this code uses the sizeof() operator which defined in stdio.h library
 * so it should be included whenever you want to use this operator
 * the sizeof() operator takes a variable of certain data type as input
 * and returns its size in bytes i.e. how much blocks variable takes in memory
 * ex: if a is declared as char so sizeof(a) will return 1
 * which refers that var a reserves 1 byte on memory */

#include <stdio.h>

int main()
{
    char x;
    int y;
    float z;
    double l;


        printf("The size of char data type is %d.\n", sizeof(x));
        printf("The size of int data type is %d.\n", sizeof(y));
        printf("The size of float data type is %d.\n", sizeof(z));
        printf("The size of double data type is %d.\n", sizeof(l));


    return 0;
}
