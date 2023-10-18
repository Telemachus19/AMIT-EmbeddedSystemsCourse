#include <stdio.h>
int main()
{
    int a = 3, b = 4, c = 8;
    int x = (3, 5, 4); // a comma has the least precedence
    int y;
    printf("%d\n", x);
    /*
    Therefore the value inside the x variable is 4.
    Each statement inside the brackets are executed the following is an example.
    */
    x = (printf("Enter the value of y: "), scanf("%d", &y), 5);
    printf("The value of y: %d, the value of x: %d\n", y, x);
    int z;
    z = 3, 4, 5; // Doesn't make an error and this is equivalent to line 5
    printf("z:%d\n", z);
    z = printf("hello\n"), 4;
    printf("z:%d\n", z); // Notice that the z has the value of return value of printf statement.
    return 0;
}