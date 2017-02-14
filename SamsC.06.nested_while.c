/* Demonstrates nested "while" Statements. */

#include <stdio.h>
#define MAX               100                                   // change range

unsigned int n           = 10;                                  // change the number of inputs

unsigned int array[5];                                          // "5" seems to be inconsequential if value of "n" is changed to something new

int main(void)
{
    unsigned int ctr = 0, nbr = 0;

    printf("\nThis program prompts you to enter %u numbers\n", n);
    printf("Each number should be from 1 to %u\n", MAX);

    while (ctr < n)
    {
        nbr = 0;
        while (nbr < 1 || nbr > MAX)                            // exceeding the limit, results in the repeated request 
        {
            printf("\nEnter number %u of %u: ", ctr + 1, n);    // size of array determined by "n"
            scanf("%u", &nbr);
        }
        array[ctr] = nbr;
        ctr++;
    }
    
    printf("\n");                                               // creates an empty line for clearer output

    for (ctr = 0; ctr < n ; ctr++)                              // size of array, determined by "n"
    printf("Value %u is\t%u\n", ctr + 1, array[ctr] );

    printf("\n");                                               // creates an empty line for clearer output

    return 0;
}