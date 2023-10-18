#include "D:\computer-science\AMIT-Embedded_systems_course\Session-06-11.08.23\DebugHeader.h"
#include <stdio.h>

int main()
{
#if defined(IS_DEBUG_MODE)
    printf("debug mode\n");
#else
    printf("not debug \n");
#endif
    return 0;
}