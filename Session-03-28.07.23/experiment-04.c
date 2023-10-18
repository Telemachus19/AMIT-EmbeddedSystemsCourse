#include <stdio.h>
int main(void)
{
    int x = 6, y = 12;
    if (((x++) == 6) && ((++y) == 13))
    {
        printf("Ok\n");
    }
    else if (((++x) == 6) || ((++y) == 13))
    {
        printf("Not ok\n");
    }
    else
    {
        printf("not correct\n");
    }
    return 0;
}