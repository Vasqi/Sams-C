/* Write an "if" statement that assigns the value of "x" */
/* to the variable "y" only if "x" is between 1 and 20. */
/* Leave "y" unchanged if "x" is not in that range. */

#include <stdio.h>

int x, y;

int main ( void )
{
    printf( "\nGive me a number: " );
    scanf("%d", &x);

    if (( x >= 0 ) && ( x <= 20 ))
    {
    y = x;
    printf("\n%u is between 0 and 20\n\n", y);
    }
    else
    {
        printf("\n%u is out of range, so y is unchanged!\n", x );
        printf("y = %u\n\n", y);
    }
    return 0;
}