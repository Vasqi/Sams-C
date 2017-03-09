/* change SamsC.12.scope2.c to prevent the error. */
/* do this without using any external variables */

/* scope2.c - Illustrates variable scope */

#include <stdio.h>


void print_value(int x);            // 1:  function prototype (changed to include int argument)

int main(void)
{
    int x =         999;            // scope declared LOCALLY (exclusive to main)
    
    printf("\n%d\n", x);
    print_value(x);                 // 2:   included 'x' as argument

    return 0;
}

void print_value(int x)             // 1:  function definition (changed to include int argument)
{
    printf("%d\n\n", x);            // error:  ‘x’ undeclared 
}

