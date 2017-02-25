/* rewrite SamsC.08.randomarray.c */
/* to use a single dimensional array. */
/* Print the average of the 1,000 variables */
/* before printing the individual values. */
/* Note: Don't forget to pause after every 10 values printed. */

                                            // how can I printout 10 at a time on single array?

#include <stdio.h>                  
#include <stdlib.h>                         // for rand()
#include <time.h>                           // for time()

#define TOTAL   1000

int random_array[TOTAL];                                                        // 1:  use a single dimensional array.
float input_avg;
int x1, x2 = 0;
void srand(unsigned int seed);
int input_total = 0;

int main(void)
{
    
srand (time(NULL));

    for (x1 = 0; x1 < TOTAL; x1++)
    {
        random_array[x1] = rand();                                              // fill array with random input
    }
                                            
    
/* Find and input average */

    for (x1 = 0; x1 < TOTAL; x1++)                        
    {
        input_total += random_array[x1];                                        // sum array elements
        input_avg = (float)input_total/TOTAL;                                   // get average
    }
        /* Display input average */

        printf("\nInput average is:\t%.3f\n", input_avg);                       // 2:   print average "%f" 
                                                                                // note 1:
        puts("\nPress ENTER to view input values, Ctr-C to quit.");
        getchar();                                                              // hold for key press

    // 3:   Now Display array elements 10 at a time

        for (x1 = 0; x1 < TOTAL; )                                              // omitted "x1++"
        {
                x2 = x1 + 10;                                                   // 4:   output 10 at a time 
            for (x2 = (x1 + 10); x1 < x2; )                                     // omitted "x1++"
            {
                printf("\nrandom_array[%d]:\t%d", x1 + 1, random_array[x1]);    // 3:   print output ("x1 + 1" for improved output) 
                x1++;                                                           // "x1++" is covered here
            }

        puts("\nPress ENTER to continue, Ctr-C to quit.");                
        getchar();                                                              // (hold for key press)

        }while (x1 < TOTAL);
                            
    
            
    puts("\n");

    return 0;
}

/* When TOTAL is set high, it is basically impossible to verify "average"
However, when manually initializing values (of low quantity) 
with known expected "average", then output of "average" is confirmed correct.
CONCLUSION: the scale of this array makes testing more difficult. */