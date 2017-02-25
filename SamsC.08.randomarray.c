/* randomarray.c - Demonstrates using multidimensional array. */

#include <stdio.h>                  
#include <stdlib.h>                 // for rand()

int random_array[10][10][10];       // Declare a three-dimensional array with 1000 elements
int a, b, c;

int main(void)
{
    // 1:   Fill array with random numbers. 
    // 2:   The C Library function rand() returns random numbers. 
    // 3:   Use one for loop for each array subscript.

    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            for (c = 0; c < 10; c++)
            {
                random_array[a][b][c] = rand();     // 2:   The C Library function rand() returns random numbers. 
            }
        }
    }

    /* Now Display array elements 10 at a time */

    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            for (c = 0; c < 10; c++)
            {
                printf("\nrandom_array[%d][%d][%d]:\t", a, b, c);
                printf("%d", random_array[a][b][c]);
            }

            printf("\nPress ENTER to continue, Ctr-C to quit.");

            getchar();                              // Display array elements 10 at a time (getchar() waits for keypress to proceed)
        }
    }

    return 0;
}                                                   // end of main()