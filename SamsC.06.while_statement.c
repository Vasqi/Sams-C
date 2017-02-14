/* Demonstrates a simple "while" Statement. */
/* "while" = "for ( ; condition; )" */

#include <stdio.h>

#define MAXCOUNT    20

int count;

int main(void)                  // Print the numbers 1 through 20
{
    count = 1;                  // initializes variable (not accounted for by the "while" Statement)
    
    printf("\n");               // provides empty space at begining

    while (count <= MAXCOUNT)
    {
        printf("%d\n", count);
        count++;                // modifies state of condition - progressing to "false"
    }

    printf("\n");               // provides empty space at end of output

    return 0;
}