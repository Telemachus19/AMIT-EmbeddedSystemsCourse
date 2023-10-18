---
title: Session 03 28.07.23
author: Ahmed Ashraf
fontsize: 10pt
geometry: 
    - margin= 0.5in
---

- Statements inside `sizeof` function are not executed for example

```c
#include <stdio.h>
int main(void)
{
    int x = 4, z;
    z = sizeof(x++);          // A statement inside the sizeof function doesn't execute
    printf("%d\n%d\n", x, z); // The result is 4,4
    return 0;
}
```

The output of the previous:
```
4
4
```

