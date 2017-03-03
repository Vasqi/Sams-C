/* write a code that allocates space for an 80-character string */
/* and then inputs a string from the keyboard and stores it in the allocated space */

#include <stdio.h>
#include <stdlib.h>                 // for memalloc() and free()

char *string, *ptr;

int main(void)
{
    ptr = malloc(81 * sizeof(char));        // allocate a block of 80 bytes. 

    if (ptr == NULL)
    {
        puts("Memory allocation error.");
        return 1;                           // the exit() library function terminates the program.
    }

    puts("\nEnter a statement of less than 80 characters and then hit ENTER.\n");

    string = gets(ptr);

    puts("");
    printf("\nThe address of ptr = %p\n\n", ptr);                                   // address of int
    printf("%s", string);                           // Display the string on the screen to test.
    printf("\nThe address of ptr = %p\n\n", ptr);                                   // address of int
    free(ptr);                                      // Returns the previously allocated memory back to the system
    free(string);
    puts("");

    return 0;
}

// seriously sketchy ussing pointers and gets()
/*  The address of ptr = 0x22c6010

    how about now?

    The address of ptr = 0x22c6010


    [bad_cat@KittyLitter LearningCode]$ ./a.out

    Enter a statement of less than 80 characters and then hit ENTER.

    what if I write something different


    The address of ptr = 0x15a6010

    what if I write something different

    The address of ptr = 0x15a6010


    [bad_cat@KittyLitter LearningCode]$ ./a.out

    Enter a statement of less than 80 characters and then hit ENTER.

    how about now?


    The address of ptr = 0x1741010

    how about now?

    The address of ptr = 0x1741010 */
