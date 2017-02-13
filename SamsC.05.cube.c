/* Demonstrates a function */
#include <stdio.h>

long cube(long x);                              // function prototype

long input, answer;

int main(void)
{
    printf("\nEnter an integer value up to 3 digits: ");
    scanf("%3d", &input);                       // note: "%d" is the conversion specifier for a long integer, where "%2d" = 2 digit long integer
    answer = cube(input);                       // value of cube() (i.e. x_cubed which was returned from line 26), assigned to answer

    printf("\nThe cube of %1d is %1d. \n\n", input, answer);

    return 0;
}

/* function: cube() - calculates the cubed value of a variable */

long cube(long x)                               // function definition
{
    long x_cubed;                               // declare a local variable

    x_cubed = x * x * x;                        // assigned value to variable x_cubed from calculation of input provided on line 11
    return x_cubed;                             // returns value of x_cubed to function cube(long x) on line 12
}
