/* stream.c - Demonstrate the equivilence of a stream input and output */
// input line, then immediately output it.

#include <stdio.h>

int main(void)
{
    char buffer[256];

    puts("\nIf you type it, I'll repeat it: ");
    puts(fgets(buffer, 256, stdin));        // substituted fgets() for gets()

    return 0;
}