/* BUG BUSTER - Is anything wrong with the following program? */

#include <stdio.h>

void print_function(char star);

int ctr;

int main(void)
{
    char star;                      // variable star is not initialized

    print_function(star);
    return 0;
}

void print_function(char star)
{
    char dash;                      // variable dash is not initalized

    for (ctr = 0; ctr < 25; ctr++)
    {
        printf("%c%c", star, dash);
    }
}

/* also, why not make function prototype:

    void print_function(void)

call function with:

    print_function()

then move declaration to print_function() definition */