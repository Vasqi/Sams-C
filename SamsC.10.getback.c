/* getback.c--Demonstrates using the gets() return value */

#include <stdio.h>

char input[257], *ptr;      // Declare a charater array to hold input, and a pointer

int main(void)
{
    puts("\nEnter text a line at a time, then press ENTER.");   // Display instructions
    puts("Enter a blank line when done.\n");

    while ( *(ptr = gets(input)) != '\0')   // loop as long as input is not a blank line
    {
        printf("You entered: %s\n", input);
    }
    puts("\nThank you and good-bye.\n\n");

    return 0;
}

/* Because it is not always possible to know how many characters gets() will read, 
and because gets() will continue to store characters past the end of the buffer,
it should be used with caution. beyone the buffer of the memallocated array, 
input may overwrite other data. */

// gets() accepts input from keyboard (sans \n) and adds '\0' (NULL character).
// the address of the string is found by the name of the array

// if a non-initialized pointer stores input from gets(), 
// it might overwrite existing code.