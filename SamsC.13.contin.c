/* contin.c - Demonstrates the continue statement */

#include <stdio.h>

int main(void)
{
    char buffer[81];                            // Declare a buffer for input
    int ctr;                                    // declare counter variable

    puts("\nEnter a line of text: ");
    fgets(buffer, 81, stdin);                   // substituting for gets(buffer)

    for (ctr =0; buffer[ctr] != '\0'; ctr++)    // remove lowercase vowels 
    {
        if (buffer[ctr] == 'a' || buffer[ctr] == 'e' || buffer[ctr] == 'i' || buffer[ctr] == 'o' || buffer[ctr] == 'u')
            {
                continue;                       // i.e. skips vowels and continues to next character in string
            }
    
        putchar(buffer[ctr]);
    }

    puts("");

    return 0;
}

// continue differs from break in that
// it does not terminate the loop.