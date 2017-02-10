/* rewrite nested "if" as "single - if" with logical operators */

#include <stdio.h>

int x;

int main( void )
{
    printf("\n Give me a number that is less than 1 or more than 10: ");
    scanf("%d", &x);

    // if (x < 1)
    //  if (x > 10)
    //      statement;

    if ((x < 1) || (x > 10))
    {
        printf("\nYay, you did it!\n");
        printf("%u is in the indicated range!\n\n", x);
    }
    else
    {
        printf("\nNope!, that didn't work. \n");
        printf("%u is out of range!\n\n", x);
    }
}