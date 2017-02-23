/* Write a program that inputs integers from the keyboard, */
/* storing them in an array. */
/* Input should stop when a zero is entered */
/* or when the end of the array is reached. */
/* Then, find and display the array's largest and smallest values. */
/* (Note: This is a tough problem, */
/* because arrays haven't been completely covered in this book yet. */
/* If you have difficulty, try solving this problem again after reading Lesson 8, */
/* "Ussing Numeric Arrays.") */

#include <stdio.h>

#define LIMIT       5       // Establishes "input" LIMIT

int input[LIMIT];
int largest(int);
int smallest(int);

int main(void)
{
    int x1 = 0;             // counts array elements
    int x2 = 0;             //  input value
    int large = 0;          // output "largest input value"
    int small = 0;          // output "smallest input value"

    puts("\nThis program will prompt you to enter 5 integers\n");
    
    do
    {
        printf("\nEnter number %u of %u: ", x1 + 1, LIMIT);     // size of array determined by "n"
            scanf("%d", &x2);                                   // 1:   Input Integers from keyboard
        
        /* Fill the array */

            input[x1] = x2;                                     // 2:   Storing them in an array
                x1++;                                           //  increase index + 1

    }while ((x1 < LIMIT) && (x2 != 0));                         // 3a:  Input should stop when "0" is inputs
                                                                // 3b:  Input should stop when array LIMIT reached
        
        /* Read the array */

    for (x1 = 0; x1 < LIMIT ; x1++)                             // read the array
    
    // printf("Value %u is\t%d\n", x1 + 1, input[x1] );         // uncomment to test read (working fine)

        /* Compare array values */                              // *** NOT WORKING ***

    for (x1 = 0; x1 < LIMIT ; x1++)
    
        if ((input[x1] >= input[0]) && (input[x1] >= input[1]) && (input[x1] >= input[2]) && (input[x1] >= input[3]) && (input[x1] >= input[4]))
        large = input[x1];                                      // 4a:  Find arrays largest value

    for (x1 = 0; x1 < LIMIT ; x1++) 
        
        if ((input[x1] <= input[0]) && (input[x1] <= input[1]) && (input[x1] <= input[2]) && (input[x1] <= input[3]) && (input[x1] <= input[4]))
        small = input[x1];                                      // 4b:  Find arrays smallest value


    printf("\nYour largest input is:\t%d", large);              // 5a:  Display arrays largest value
    printf("\nYour smallest input is:\t%d\n\n", small);         // 5b: Display arrays smallest value

    return 0;
}
