/* write a function named sumarrays() */
/* that accepts two arrays as arguments */
/* totals all values in both arrays, */
/* and returns the total to the calling program. */


#include <stdio.h>

#define MAX     5

int array1[MAX + 1], array2[MAX + 1];

int sumarrays(int array1[], int array2[]);

int main(void)
{
    int x1;

    puts("");

    for(x1 = 0; x1 < MAX; x1++)
    {
        printf("Enter value %d of %d for array1[]  \t", x1 + 1, MAX);
        scanf("%d", &array1[x1]);
    
        if (array1[x1] ==0)
        {
            x1 = MAX;                                                // will exit for loop
        }
    }
     array1[MAX] = 0;

     for(x1 = 0; x1 < MAX; x1++)
    {
        printf("Enter value %d of %d for array2[]  \t", x1 + 1, MAX);
        scanf("%d", &array2[x1]);

        if (array2[x1] ==0)
        {
            x1 = MAX;                                                // will exit for loop
        }
    }
     array2[MAX] = 0;

    printf("\nTotal value of both arrays is:  \t%d\n\n", sumarrays(array1, array2));

    for (x1 = 0; x1 < MAX; x1++)
    {
        printf("array1[x1]: %d\tarray2[x1]: %d\n", array1[x1], array2[x1]);     // input printout
    }
    puts("");

    return 0;
}

int sumarrays(int array1[], int array2[])
{
    int x1, sum_array1 = 0, sum_array2 = 0;

    for (x1 = 0; array1[x1] != 0; x1++)
    {
        if (x1 == 0)
        {
            sum_array1 = array1[x1];
        }
        else                                                      // accumulate values
        {
            sum_array1 += array1[x1];
        }
        // printf("xa:\t%d\n", sum_array1);                      /* display value accumulation */
    }

    for (x1 = 0; array2[x1] != 0; x1++)
    {
        if (x1 == 0)
        {
        sum_array2 = array2[x1];
        }
        else                                                    // accumulate values
        {
            sum_array2 += array2[x1];
        }
        // printf("xb:\t%d\n", sum_array2);                      /* display value accumulation */
    }
    
    return sum_array1 + sum_array2;
}