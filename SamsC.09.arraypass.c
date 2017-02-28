/* arraypass.c--Passingan array to a function */

#include <stdio.h>

#define MAX     10

int array[MAX], count;

int largest(int num_array[], int length);

int main(void)
{
    puts("");

    for (count = 0; count < MAX; count++)
    {
        printf("Enter an integer value %d of %d:  \t", count + 1, MAX);
        scanf("%d", &array[count]);                                     // input "largest value" from keyboard in a random series of inputs
    }
    printf("\n\nLargest value:\t%d\n\n", largest(array, MAX));          // Call the function and the return value
    printf("\nAddress of array[] is:\t%d\n\n", array);                  // demonstrates that "array" = a pointer to address of array[]

    return 0;
}

// returns largest value in an integer array
int largest(int num_array[], int length)                                // "num_array[]" = "array" = address of array[], and "length" = MAX
{
    int count, biggest;

    for (count = 0; count < length; count++)
    {
        if (count == 0)
        {
            biggest = num_array[count];                                 // "num_array[]" = array[]
        }
        if (num_array[count] > biggest)
        {
            biggest = num_array[count];
        }
    }

    return biggest;
}