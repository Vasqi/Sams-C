/* Demonstrates a simple "for" Statement */

#include <stdio.h>

#define MAXCOUNT    20

int count;

int main(void)
{
    /* print numbers 1 through 20 */

    for (count = 1; count <= MAXCOUNT; count++)
        printf("%u\n", count);

    return 0;
}