/* modify the program from SamsC.08.e09.c */
/* After printing the initialized values */
/* the program should copy the values to a new array */
/* and add 10 to each value. */
/* Then the new array values should be printed */

#include <stdio.h>

#define TOTAL   10                                  // 10 elements

int ten[TOTAL];                                     // 1:   initialize an array of 10 elements
int plus_ten[TOTAL];
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

/* the program should copy the values to a new array and add 10 to each value.*/

    for (x1 = 0; x1 < TOTAL; x1++)
    {
        plus_ten[x1] = ten[x1] + TOTAL;
    }

/* Then the new array values should be printed */

    for (x1 = 0; x1 < TOTAL; x1++)
    {
        printf("\nplus_ten[%d]:\t%d", x1, plus_ten[x1]);      
    }


    puts("\n");

    return 0;
}