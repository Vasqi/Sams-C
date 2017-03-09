/* scope2.c - Illustrates variable scope */

#include <stdio.h>


void print_value(void);         // function prototype

int main(void)
{
    int x =         999;             // scope declared LOCALLY (exclusive to main)
    
    printf("\n%d\n", x);
    print_value();

    return 0;
}

void print_value(void)
{
    printf("%d\n\n", x);             // error:  ‘x’ undeclared 
}

/* LOCAL variables must be initialized to some value */
/* else they get garbage value (not-zero) */