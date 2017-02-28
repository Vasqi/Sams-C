/* ptr-math.c -- Demonstrates using pointer arithmatic to */
/* access array elements with pointer notation */

#include <stdio.h>
#define MAX     10

short i_array[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};               // Declare and initialize an integer array
float f_array[MAX] = { .01, .1, .2, .3, .4, .5, .6, .7, .8, .9};    //Declare and initialize float array

short *i_ptr, count;                                                // Declare pointer to int and int variable
float *f_ptr;                                                       // Declare a pointer to float

int main(void)
{
    /* initialize pointers */

    i_ptr = i_array;                                                // equivelent to:   i_ptr = i_array[0];
    f_ptr = f_array;                                                // equivelent to:   f_ptr = f_array[0];

    /* Print array elements */
    puts("");

    for (count = 0; count < MAX; count++)
    {
        printf("%d\t%f\n", *i_ptr++, *f_ptr++);                     // "++" used on pointers increment to size of pointer
    }

    puts("");

    return 0;
}

// NOTE: I changed type int to type short
// because type int and type float are the same size (i.e. 4) on my system
// whereas type short is size 2 on my system.
// ptr1 - ptr2 will tell you how far apart the elements are (inside a common array)