/* static.c - Demonstrates automatic and static variables */

#include <stdio.h>

// static type variable         (external variable: would only be visable to functions in this file below)

void funcl(void);

int main(void)
{
    #define TIMES   20          // changed scope to local

    register int count;         // declare local variables (register: for loop variables)

    puts("");

    for (count = 0; count < TIMES; count++)
    {
        printf("At iteration %d: ", count);
        funcl();
    }
    puts("\n");

    return 0;
}

void funcl(void)
{
    // extern type variable;    (used in functions to declare a static external (global) variable defined elsewhere. )
    static int x = 0;           // declare and initialize static local variable (will retain value: and increment)
    auto int y = 0;             // declare and initialize automatic local variable (will not increment)

    printf("\tx = %d,\t\ty = %d\n", x++, y++);
}

/* (register) not recommended in modern compilers, but worth understanding:
only with simplistic numeric variables (e.g. count).
can't be used with static  or external.
and you can't define a pointer to a register variable. */

// (global or "external") default initialized to 0
// (auto) is default local variable: uninitiated, assigns garbage value, else initialized value each time function is called.
// (static) only initializes the variable the first time the function is called. Not (necessary) to use in main.
