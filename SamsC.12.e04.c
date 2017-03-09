/* Change the program in SamsC.12.e03.c */
/* Instead of declaring var as a global variable */
/* change to local variable in main() */
/* The program should still print var in a seporate function. */
/* Do you need to pass var as a parameter to the function? */

#include <stdio.h>
    
void print_var(int var);                // 3a:  function prototype (with type int argument)

int main(void)
{
    int var;                            // 1:   declared a LOCAL variable type int called var
    var = 789;                          // 2:   initialize var to any value
    print_var(var);                     // 3c:  call the function with var as argument

    return 0;
}

void print_var(int var)                     // 3b:  define function
{
    printf("\nvar = %d\n\n", var);
}

// answer: yes, var must be passed to argument of function