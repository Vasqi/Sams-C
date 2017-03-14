/* message2.c - Passing an array of pointers to a function */

#include <stdio.h>

#define WORDS       8

void print_strings(char *p[], int n);

int main(void)
{
    char *message[WORDS] = { "Four", "score", "and", "seven", "years", "ago,",  "our", "forefathers..." };

    print_strings(message, WORDS);              // takes pointer to array, and number of elements as arguments

    return 0;
}

void print_strings(char *p[], int n)
{
    int count;

    puts("");
    
    for (count = 0; count < n; count++)
    {
        printf("%s ", p[count]);
    }
    puts("\n");
}