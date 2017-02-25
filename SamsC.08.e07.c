/* write a program that puts random numbers */
/* into a two dimensional array */
/* that is 5 x 4. */
/* Print values in columns on screen */
/* (Hint: Use rand() function from SamsC.08.randomarray.c) */

/* TIP
Whenever you use rand() function, it is a good idea to add
the following line to the begining of your program:
srand (time(NULL));
This Function call is needed to ensure everytime you run the program
you get different random numbers. Believe it or not, there are times
when a user would want to generate the same set of random numbers 
(scientific experiments, for example), so the srand, short for seed random, 
function is needed to ensure each time the program runs, 
it generates a new set of numbers
*/

#include <stdio.h>                          // for printf() and puts()
#include <stdlib.h>                         // for rand()
#include <time.h>                           // for time()

int array[5][4];                            // 1:   a two dimensional array, that is 5 x 4
int x1, x2;
void srand(unsigned int seed);

int main(void)
{
    srand (time(NULL));                     // This Function call is needed to ensure everytime you run the program you get different random numbers

    for (x1 = 0; x1 < 5; x1++)
    {
        for (x2 = 0; x2 < 4; x2++)
        {
            array[x1][x2] = rand();         // 2:   add random numbers to array elements
        }
    }

    /* Print values in columns on screen */
    puts("\nThis is an array of 5 x 4 with randomly input values printed out in columns.");
    puts("\n");                                         // to create initial empty line on output
    for (x1 = 0; x1 < 5; x1++)
    {
        for (x2 = 0; x2 < 4; x2++)
        {
                printf("[%d][%d]: ", x1+1, x2+1);   // 3:   Print values in columns on screen: "n+1" for better output
                printf("%d\t", array[x1][x2]);      // "\t" establishes printout in columns
        }
        
        printf("\n");                               // "\n" takes printout to next row
    }
    puts("\n");
    return 0;
}

