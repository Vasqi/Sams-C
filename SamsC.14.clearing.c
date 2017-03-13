/* clearing.c - clearing stdin of extra characters */

#include <stdio.h>

#define NAME        20                          // defines length on name limit
#define JUNK        80                          // defines stdin characters clearing limit

void clear_kb(void);                            // clears scanf()

int main(void)
{
    int age;
    char name[NAME];

    puts("\nEnter your age: ");
    scanf("%d", &age);

    clear_kb();                                 // clear stdin of any extra input (e.g. overflow)

    puts("Now enter your name: ");
    scanf("%s", name);                          // only accepts input upto first blank space, \n, or \r.

    printf("\nYour age is:\t%d.\n", age);
    printf("\nYour name is:\t%s.\n\n", name);

    return 0;
}

void clear_kb(void)
{
    char junk[JUNK];                            // used type char to accept all keyboard inputs
    fgets(junk, JUNK, stdin);                   // accepts input < JUNK, until \r.
}