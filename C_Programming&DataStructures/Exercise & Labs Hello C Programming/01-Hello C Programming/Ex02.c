/*
 ============================================================================
 Author      : AMIT Learning
 Copyright   : AMIT Learning
 ========================================================
 Write a code that swaps two integers entered by user
 Goal : to make sure that student understands order of execution
 =================output sample==========================
 Enter 2 integer numbers: 2 10
 Your input after re-ordering 10 2
 ============================================================================
 */

 #include <stdio.h>

 int main()
 {
     while (1)
     {
         int input_1 = 0, input_2 = 0;

         printf("Please enter two numbers to be reversed.\n");
         scanf("%d", &input_1);
         scanf("%d", &input_2);

         printf("%d %d\n\n", input_2, input_1);
     }

     return 0;
 }
