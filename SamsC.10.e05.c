/* write a function that copies one array */
/* of characters into another. */
/* HINT: JUST LIKE LESSON 9 */

#include <stdio.h>
#include <stdlib.h>                 // for memalloc() and free()

char count, *ptr, *p;
char copy_ptr[35];
void copy_char_array(char copy[]);

int x1;

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
    
    copy_char_array(ptr);

    puts("");

    puts("Copy the contents of one character array into another");

    printf("\tptr: %s\t\tcopy_ptr: %s\n\n", ptr, copy_ptr);         // use of "%s" for string

    for (x1 = 0; x1 < 35; x1++)
    {
        printf("%d\t%c\t\t\t\t\t%c\n", x1, ptr[x1], copy_ptr[x1]);  // use of "%c" for individual character
    }

    free(ptr);                              // Returns the previously allocated memory back to the system
    puts("");

    return 0;
}

void copy_char_array(char array[])
{
    int x1;

    for (x1 = 0; x1 < 35; x1++)
    {
        copy_ptr[x1] = ptr[x1];
    }
}