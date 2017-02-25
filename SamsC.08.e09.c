/* write a program that initializes an array of 10 elements. */
/* Each element should be equal to it's subscript. */
/* The program should then print each of the 10 elements */

#include <stdio.h>

#define TOTAL   10                                  // 10 elements

int ten[TOTAL];                                     // 1:   initialize an array of 10 elements
int x1;

int main(void)
{
    for (x1 = 0; x1 < TOTAL; x1++)
    {
        ten[x1] = x1;                               // 2:   initialize each element to match it's subscript
    }

    for (x1 = 0; x1 < TOTAL; x1++)
    {
        printf("\nten[%d]:\t%d", x1, ten[x1]);      // 3:   display array and inputs
    }

    puts("\n");

    return 0;
}