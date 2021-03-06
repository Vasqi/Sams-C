/* e03: write a statement to get an integer value and print it */
/* e04: modify e03 so that it accepts only even numbers */

/* modify e04 so that it returns values until the number 99 is entered, */
/* or until six even values have been entered. */
/* store them in an array. (Hint: you need a loop.) */
/* see also: SamsC.06.nested_while.c */


#include <stdio.h>

#define END                 99

unsigned int n              = 6;                      // change the number of inputs

unsigned int count[6];

int main(void)
{
    unsigned xC = 0, xI = 0;

    while ((xC < n) && (xI != END))                         // terminate at "99"
    {
            xI = 0;
        
            do
            {
            printf("\nEnter number %u of %u unsigned even numbers: ", xC + 1, n);
            
            scanf("%u", &xI);
            }while ((xI%2 != 0) && (xI != END));                             // checks to see it there is a remainder when divided by 2
            
            count[xC] = xI;
            xC++;
            
    }

    for (xC = 0; xC < n ; xC++) 
    printf("\nValue %u is\t%u", xC + 1, count[xC] );
    puts("\n");

    return 0;
}