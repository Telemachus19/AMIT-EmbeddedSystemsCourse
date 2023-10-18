#include <stdio.h>
#include <math.h>

void func(void);
int x = 10;
int main()
{
    int x = 10;
    func();
}
void func(void)
{
    x = x + 5;
}