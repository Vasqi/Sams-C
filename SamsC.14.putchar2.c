/* putchar2.c - Using putchar() to display a string */

#include <stdio.h>

#define MAXSTRING       80

int main(void)
{
    char message[] = "Displayed with putchar().";
    int count;

    puts("");

    for (count = 0; count < MAXSTRING; count++)
    {
        if (message[count] == '\0' )
        {
            putchar('\n');
            break;
        }
        else
        {
            putchar(message[count]);        // if end of string not found, write next character
        }
    }
    puts("");

    return 0;
}

// putchar('x'); = fputc('x', stdout);