/* Write a program that declares a global variable */
/* of type int called "var" */
/* Initialize var to any value. */
/* The program should print the value of var in a function (not main) */
/* Do you need to pass var as a parameter to the function? */

#include <stdio.h>

int var;                                // 1:   declared a GLOBAL variable type int called var

void print_var(void);                   // 3a:  function prototype (no argument)

int main(void)
{
    var = 789;                          // 2:   initialize var to any value
    print_var();                        // 3c:  call the function

    return 0;
}

void print_var(void)                    // 3b:  define function
{
    printf("\nvar = %d\n\n", var);
}

// answer: no, you do not need to pass var to function because var declared globally