/* Can a program have a global and a local variable with the same name? */
/* Write a program that uses a global and local */
/* with the same name to prove your answer */

#include <stdio.h>

int x = 25;                              // x declared globally and initialize a global 'x'

void print_x(void);                 // print function with no argument

int main(void)
{
    printf("\nglobal x \t\t\t %d", x);
    {
        int x = 30;                     // declare and initialize block 'x'
        printf("\n\tblock x \t\t %d", x);
    }

    printf("\nglobal x \t\t\t %d", x);

    int x;                          // declare LOCAL 'x'
    x = 35;                         // initialize LOCAL 'x'
    printf("\n\t\tlocal x \t %d", x);

    print_x();                      // call print function

    return 0;
}

void print_x(void)
{
    printf("\nglobal x \t\t\t %d\n\n", x);
}

// answer: yes, you can have multiple instances of a variable with a common name
// LOCAL variables suppercede GLOBAL while within scope