/* arraypass2.c--Passing an array to a function. Alternative way. */

#include <stdio.h>

#define MAX     10

int array[MAX+1], count;
int largest(int num_array[]);

int main(void)
{
    puts("");
    for (count = 0; count < MAX; count++)                               // Input values from keyboard
    {
        printf("Enter an integer value %d of %d:  \t", count+1, MAX);
        scanf("%d", &array[count]);

        if (array[count] ==0)
        {
            count = MAX;                                                // will exit for loop
        }
    }
    array[MAX] = 0;                                                     // this dedicated final array element marks "end of array"

    printf("\n\nLargest value:\t%d\n\n", largest(array));               // call function and display return value

    return 0;
}

int largest(int num_array[])                                            // returns largest value of array
{
    int count, biggest;

    for (count = 0; num_array[count] != 0; count++)                     // continues until it arrives at "end of array" element (value)
    {
        if (count == 0)
        {
            biggest = num_array[count];
        }
        if (num_array[count] > biggest)
        {
            biggest = num_array[count];
        }
    }

    return biggest;
}