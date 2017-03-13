/* putchar.c - demonstrates putchar() */

#include <stdio.h>

int main(void)
{
    int count;

    puts("");
    for (count = 33; count < 127; )
    {
        putchar(count++);
    }
    puts("\n");

    return 0;
}