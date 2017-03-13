/* puts.c - Demonstrates puts() */

#include <stdio.h>

#define SIZE 5

int main(void)
{
    char *messages[SIZE] = { "This", "is", "a", "short", "message."}; //declare and initialize an array of pointers
    int x;

    puts("");

    for (x = 0; x < SIZE; x++)
    {
        puts(messages[x]);
    }
    puts("And this is the end!\n");

    return 0;
}

// puts(string); = fputs(string, stdout);