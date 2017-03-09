/* extern.c - Illustrates declaring external variables */

#include <stdio.h>

int x =         999;             // scope declared GLOBALLY as "external variable"

void print_value(void);         // function prototype

int main(void)
{
    extern int x;               // declare 'x' as externally defined

    printf("\n%d\n", x);
    print_value();

    return 0;
}

void print_value(void)
{
    extern int x;               // declare 'x' as externally defined

    printf("%d\n\n", x);
}

/* if the function "print_value()" were in a different code module */
/* than the global declaration of the variable 'x' */
/* then the "extern" declaration would be required */

/* if

    // int x =         999;  

    gcc SamsC.12.extern.c
    /tmp/ccod0FWt.o: In function `main':
    SamsC.12.extern.c:(.text+0x6): undefined reference to `x'
    /tmp/ccod0FWt.o: In function `print_value':
    SamsC.12.extern.c:(.text+0x2d): undefined reference to `x'
    collect2: error: ld returned 1 exit status
    
    compile fails

    This is because the functions expect 'x' to be defined elsewhere.
*/