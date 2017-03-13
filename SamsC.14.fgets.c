/* demonstrates the fgets function */

# include <stdio.h>

#define MAXLEN      10                  // wraps text at length indicated.

int main(void)
{
    char buffer[MAXLEN];

    puts("\nEnter text a line at a time; enter a blank line to exit.");

    while (1)
    {
        fgets(buffer, MAXLEN, stdin);

        if (buffer[0] == '\n')
        break;

        puts(buffer);                   // why is this inside the loop?
    }
    return 0;
}