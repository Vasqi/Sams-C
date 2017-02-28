/* write a function named addarrays() */
/* that accepts two arrays that are the same size. */
/* The function should add each element in the arrays together */
/* and place the values in a third array */

#include <stdio.h>

#define MAX     10

int array1[MAX], array2[MAX], array3[MAX];
int x1;

void addarrays(int array1[], int array2[]);                      // function prototype accepts two arrays

int main(void)
{
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

    addarrays(array1, array2);

    return 0;
}

void addarrays(int array1[], int array2[])                      // function definition
{
    for (x1 = 0; x1 < MAX; x1++)
    {
        array3[x1] = array1[x1] + array2[x1];                   
    }
    /* Display output */
    
    puts("");

    for (x1 = 0; x1 < MAX; x1++)
    {
        printf("array1[x1]: %d + array2[x1]: %d = \tarray3[x1]: %d\n", array1[x1], array2[x1], array3[x1]);     // input printout
    }
    puts("");
}