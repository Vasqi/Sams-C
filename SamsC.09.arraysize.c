/* Demonstrates the relationships */
/* between addresses and elements */
/* of arrays of different data types. */

#include <stdio.h>

/* declare a counter and three arrays. */
#define LIMIT   10
int ctr;

short array_s[LIMIT];
float array_f[LIMIT];
double array_d[LIMIT];

int main(void)
{
    // table heading: variable types and sizes

    printf("\n\t\tShort %u\t\t\tFloat %u\t\t\tDouble %u\n", sizeof(short), sizeof(float), sizeof(double));                             
    printf("=========================================================================");

    // array element addresses
    
    for ( ctr = 0; ctr < LIMIT; ctr++)
    {
        printf("\nElement %d:\t%p\t\t%p\t\t%p", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
    }
    printf("\n=========================================================================\n\n");

    return 0;

}