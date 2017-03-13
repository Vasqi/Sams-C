/* getch2.c - Using getch() to input strings */
// non-ANSI code

#include <stdio.h>
#include <stdlib.h>                                                 // for system()
#include <termios.h>
#include <unistd.h>
//#include <conio.h>                                        // unavailable in linux
//#include <curses.h>                                       // useless gor getch()

#define MAX        80

int getch(void);                                            // getch() function prototype

int main(void)
{
    char ch, buffer[MAX + 1];
    int x = 0;

    puts("\nType something:");

    while ((ch = getch()) != '\n' && x < MAX)               // works as long as I use '\n' instead of '\r'
    {
        buffer[x++] = ch;
    }
    buffer[x] = '\0';                                       // fails to terminate string early

    printf("\nYou typed: %s\n\n", buffer);

    return 0;
}

/* reads from keypress, echoes */
int getch(void)                                             // function definition for getch()
{
    struct termios oldattr, newattr;
    int ch;

    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO);                   // knock down keybuffer
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    system("stty -echo");                                   // shell out to kill echo
    ch = getchar();                                         // using standard getchar() to build getch()
    system("stty echo");
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    
    return ch;
}