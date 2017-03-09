/* BUG BUSTER - What's wrong with the following code? */

#include <stdio.h>

int main(void)
{
    int x = 1;
    static int tally = 0;           // type static is redundant in main()

    for (x = 0; x < 101; x++)
    {
        if (x % 2 == 0)     /* if 'x' is even... */
        tally++;            /* add 1 to tally */

    }

    printf("There are %d even numbers.\n\n", tally);
    return 0;
}