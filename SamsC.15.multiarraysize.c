/* Demonstrates sizes of multi-dimensional array elements */

#include <stdio.h>

int main(void)
{
    int multi[2][4];                                        // declare multi-dimensional array

    printf("\nThe size of multi =\t\t%d",         sizeof(multi));           // multi = sum of all array elements (e.g. 32)
    printf("\nThe size of multi[0] =\t\t%d",      sizeof(multi[0]));        // multi[0] = sum of half the array elements (e.g. 16)
    printf("\nThe size of multi[0][0] =\t%d\n\n", sizeof(multi[0][0]));     // multi[0][0] = size of 1 array element type int (e.g. 4)

    return 0;
}