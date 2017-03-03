/* Demonstrates using the gets() library function. */

#include <stdio.h>                  // for gets()

char input[257];                    // allocate a char type array to hold input
                    // because the maximum length on most computer screens is 256 characters, +1 (for NULL) = 257
int main(void)
{
    puts("\nEnter some text, then hit ENTER: ");
    gets(input);                                    // input from keyboard is saved in array by use of the pointer "input"
    printf("\nYou entered: %s\n\n", input);         // display string input from array

    return 0;
}

/* received warning against using gets() as DANGEROUS:  (gets() adds NULL to end of line) */
// perhaps scanf() would be a better choice.