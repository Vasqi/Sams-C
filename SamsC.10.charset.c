/* charset.c--Demonstrates the numeric nature of char variables */

#include <stdio.h>

char c1 = 'a', c2 = 90;                 // declare and initialize two char variables

int main(void)
{
    printf("\nAs a character, variable c1 is:\t%c", c1);    // c1 as character
    printf("\nAs a number, variable c1 is:\t%d\n", c1);       // c1 as a number

    printf("\nAs a character, variable c2 is:\t%c", c2);    // c2 as character
    printf("\nAs a number, variable c2 is:\t%d", c2);       // c2 as a number

    puts("\n");

    return 0;
}