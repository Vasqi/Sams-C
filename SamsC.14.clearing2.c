/* clearing2.c - clearing stdin of extra characters */
// using the fflush() function

#include <stdio.h>

#define NAME        20                          // defines length on name limit

int main(void)
{
    int age;
    char name[NAME];

    puts("\nEnter your age: ");
    scanf("%d", &age);

    fflush(stdout);                              // clear stdin of any extra input (from a file!)

    puts("Now enter your name: ");
    scanf("%s", name);                          // only accepts input upto first blank space, \n, or \r.

    printf("\nYour age is:\t%d.\n", age);
    printf("\nYour name is:\t%s.\n\n", name);

    return 0;
}

/* fflush() does  nothing on my system */
// Arch Linux
// gcc compiler

/* For input streams associated with seekable files (e.g., disk files, but
       not pipes or TERMINALS), fflush() discards any buffered data  that  has
       been fetched from the underlying FILE, but has not been consumed by the
       application.
  */