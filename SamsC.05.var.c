/* Demonstrates local variables. */

#include <stdio.h>

int x = 1, y = 2;

void demo(void);

int main(void)
{
    printf("\nBefore calling demo(, x = %d, and y = %d.", x, y);
    demo();
    printf("\nAfter calling demo(), x = %d, and y = %d.\n\n", x, y);

    return 0;
}

void demo(void)
{
    int x = 88, y = 99;                                                 // declare a initialize two local variables

    printf("\nWithin demo(), x = %d, and y = %d.", x , y);
}