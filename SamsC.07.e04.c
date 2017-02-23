/* e03: write a statement to get an integer value and print it */
/* modify e03 so that it accepts only even numbers */

#include <stdio.h>

int main(void)
{
    unsigned xI = 0;

    do
    {
    puts("\nEnter an even unsigned integer value");
    scanf("%u", &xI);
    }while (xI%2 != 0);                             // checks to see it there is a remainder when divided by 2

    printf("\nYou entered: %u\n\n", xI);

    return 0;
}