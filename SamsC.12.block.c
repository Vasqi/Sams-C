/* block.c - Demonstrates local variables within blocks */

#include <stdio.h>

int main(void)
{
    int count = 0;                                          // define a variable local to main()

    printf("\nOutside the block, count = %d", count);

    {                                                       // start a block
        int count = 999;                                    // define a variable local to block
        printf("\nWithin the block, count = %d", count);
    }                                                       // exit block

    printf("\nOutside the block, count = %d\n\n", count);

    return 0;
}