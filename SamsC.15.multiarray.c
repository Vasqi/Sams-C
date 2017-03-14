/* Demonstrates pointers and multi-dimensional arrays */

#include <stdio.h>

int main(void)
{
    int multi[2][4];                                        // declare multi-dimensional array

    printf("\nmulti =\t\t%p",           multi);             // multi = multi[0] (i.e. a pointer to a pointer)
    printf("\nmulti[0] =\t%p",          multi[0]);          // multi[0] = address of multi[0][0] (i.e. a pointer)
    printf("\n&multi[0][0] =\t%p\n\n", &multi[0][0] );      // address of multi[0][0]

    return 0;
}