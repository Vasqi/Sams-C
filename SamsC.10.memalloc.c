/* memalloc.c--Demonstrates the use of malloc() */
/* to allocate storage space for string data. */

#include <stdio.h>
#include <stdlib.h>                 // for memalloc() and free()

char count, *ptr, *p;

int main(void)
{
    ptr = malloc(35 * sizeof(char));        // allocate a block of 35 bytes. Test for success

    if (ptr == NULL)
    {
        puts("Memory allocation error.");
        return 1;                           // the exit() library function terminates the program.
    }
/* p is a pointer used to step through the string.
You want ptr to remain pointed at the start of the string. */

    p = ptr;
    for (count = 65; count < 91; count++)   // fill string with values 65 - 90, which are ASCII codes for A-sizeof
    {
        *p++ = count;
    }

    *p = '\0';                              // add the terminating NULL character.

    puts("");

    puts(ptr);                              // Display the string on the screen.

    free(ptr);                              // Returns the previously allocated memory back to the system

    puts("");

    return 0;
}