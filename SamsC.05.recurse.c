/* Demonstrates function recursion. */
/* Calculates the factorial of a number. */

#include <stdio.h>

unsigned int f, x;

unsigned int factorial(unsigned int a);

int main(void)
{
    puts("\nEnter an integer value between 1 and 8: ");
    scanf("%u", &x);

    if (x > 8 || x < 1)
    {
        printf("Only values 1 to 8 are acceptable!\n\n");
    }
    else
    {
        f = factorial(x);
        printf("%u! equals %u\n\n", x, f);
    }
    return 0;
}

unsigned int factorial(unsigned int a)
{
    if (a == 1)
        return 1;
    else
    {
        a *= factorial(a-1);
        return a;
    }
}