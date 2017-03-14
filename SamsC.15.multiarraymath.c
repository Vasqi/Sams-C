/* Demonstrates pointer arithmetic with pointers to multi-dimensional arrays */

#include <stdio.h>

int main(void)
{
    int multi[2][4];                                        // declare multi-dimensional array

    printf("\nThe value of multi =\t\t%p",          multi);        // multi = &multi[0][0]
    printf("\nThe value of (multi + 1) =\t%p",      multi + 1);    // multi + 16 = multi + 1 (i.e. size of multi[0])
    printf("\nThe address of multi[1] =\t%p\n\n",  &multi[1]);     // multi + 1 = &multi[1]

    return 0;
}
/* The value of multi =		0x7ffdb74033a0
The value of (multi + 1) =	0x7ffdb74033b0
The address of multi[1] =	0x7ffdb74033b0
 */

 // 0x7ffdb74033b0 - 0x7ffdb74033a0 = 140727677891504 - 140727677891488 = 16

 /* 
 Equivelent statements:
 printf("%d",   multi[0][0]);
 printf("%d",  *multi[0]);
 printf("%d", **multi); */