/* getchar.c - Demonstrates the getchar() function */
// this program behaves just like SasmsC.14.stream.c
// but instead of fgets(), it uses getchar()
// and instead of writting the string to a char array, it writes to type int variable in loop
// and instead of reading from char array (string), with puts(), it reads from int variable with putchar() in a loop
// however, output is still all at once like before (when '\n'), not character by character, durring input.

#include <stdio.h>

int main(void)
{
    int ch;

    puts("\nAnything you type, I will repeat: ");   // line added so user knows what's going on
    while ((ch = getchar()) != '\n' )
    {
        putchar(ch);
    }
    puts("\n");

    return 0;
}

/* Because getchar() is a buffered input function, no characters are received
until you press ENTER. However, each key you press(ed) is echoed 'immediately' 
on the screen. */