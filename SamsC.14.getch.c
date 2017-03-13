/* Demonsrates use of getch() function */

#include <stdio.h>
#include <stdlib.h>                                                 // for system()
#include <termios.h>                                        // used to define getch()
#include <unistd.h>                                         // used to define getch()
//#include <conio.h>                                        // unavailable in linux
//#include <curses.h>                                       // useless gor getch()

int getch(void);                                            // getch() function prototype                    

int main(void)
{
    int ch;

    while ((ch = getch()) != '\n')  // I had to change getch() to getc(stdin) to run in linux, used '\n' instead of '\r'
    {
        putchar(ch);                                        // unbuffered input without echo (comment out for zero echo)
    }
    puts("\nDid you see that?\n\n");

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

/* conio.h not available on linux OS: getch() */
/* COMPILATION ERROR-
SamsC.14.getch.c:(.text+0x17): undefined reference to `stdscr'
SamsC.14.getch.c:(.text+0x1f): undefined reference to `wgetch'
collect2: error: ld returned 1 exit status */

/* getc() is not like getch(). 
getc() prints input at cairage return, then waits for more input.
in this program, ctr-c to exit. */

// getch() is supposed to get charaters without echoing them to screen (unless explicitly asked)
// that makes it good for password input
// shame I couldn't get it to work

// \r is escape sequence for cairage return (unbuffered character inputs test for \r, not \n)