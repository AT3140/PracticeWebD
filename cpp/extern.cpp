/*
Use Case
- Extern in following code allows first and last to be used for definition.

Note: Storage for extern variables are created at definition not declaration.
*/

#include <stdio.h>

int main(void) {
    extern int first, last; /* use global vars */
    printf("%d %d", first, last);
    return 0;
}

/* global definition of first and last */
int first = 10, last = 20;