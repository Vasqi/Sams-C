/* getchar2.c - Using getchar() to input strings */

#include <stdio.h>

#define MAX     80

int main(void)
{
    char ch, buffer[MAX+1];
    int x = 0;

    puts("\nI'll copy whatever you type!");

    while ((ch = getchar()) != '\n' && x < MAX)     // "while x < MAX" protects input from exceeding buffer allocation
    {
        buffer[x++] = ch;
    }
    buffer[x] = '\0';                               // this inputs '\0' at end of string, where string < MAX

    printf("You typed:\t%s\n\n", buffer);

    return 0;
}
/* $ gcc SamsC.14.getch2.c
/tmp/ccgsty04.o: In function `main':
SamsC.14.getch2.c:(.text+0x27): undefined reference to `stdscr'
SamsC.14.getch2.c:(.text+0x2f): undefined reference to `wgetch'
collect2: error: ld returned 1 exit status
 */