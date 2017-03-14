/* message.c - Initializes an array of pointers to type char */

#include <stdio.h>

#define WORDS       8

int main(void)
{
    char *message[WORDS] = { "Four", "score", "and", "seven", "years", "ago,",  "our", "forefathers..." };

    int count;

    puts("");

    for (count = 0; count < WORDS; count++)
    {
        printf("%s ", message[count]);
    }
    puts("\n");

    return 0;
}