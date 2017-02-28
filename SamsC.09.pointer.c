/* Demonstrates basic pointer use */

#include <stdio.h>

int var = 1;                            // Declare and initialize an int variable
int *ptr;                               // Declare a pointer to int

short vshort = 2;
char vchar = 3;
float vfloat = 4.0;

short *p_vshort;
char *p_vchar;
float *p_vfloat;

int main(void)
{
    ptr = &var;                         // Initialize "ptr" to point at "var"

    p_vshort = &vshort;
    p_vchar = &vchar;
    p_vfloat = &vfloat;

    /* Access "var" directly and indirectly */

    printf("\nDirect access, var = %d", var);
    printf("\nIndirect access, var = %d", *ptr);                                    // reads value of variable from pointer

    /* Display the address of var in two ways */

    printf("\n\nThe address of var = %p", &var);
    printf("\nThe address of var = %p\n\n", ptr);                                   // address of int
    printf("\nThe size of the address for type int is %u\n\n", sizeof(int));        // size of int address

    printf("\n\nThe address of vshort = %p", &vshort);
    printf("\nThe address of vshort = %p\n", p_vshort);                             // address of short
    printf("\nThe size of the address for type short is %u\n\n", sizeof(short));    // size of short address
    printf("\n\nThe address of vchar = %p", &vchar);
    printf("\nThe address of vchar = %p\n", p_vchar);                               // address of char
    printf("\nThe size of the address for type char is %u\n\n", sizeof(char));      // size of char address
    printf("\n\nThe address of vfloat = %p", &vfloat);
    printf("\nThe address of vfloat = %p\n", p_vfloat);                             // address of float
    printf("\nThe size of the address for type float is %u\n\n", sizeof(float));    // size of float address

    return 0;
}

/* NOTE: the address displayed is for a single byte.
any given variable, actually is a multi-byte variable 
(some types are larger than others). The address displayed
is the address of the first (of a succession) of addresses,
one for each byte of the multibit variable. */