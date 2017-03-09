/* scope.c - Illustrates variable scope */

#include <stdio.h>

int x =         999;             // scope declared GLOBALLY as "external variable"

void print_value(void);         // function prototype

int main(void)
{
    printf("\n%d\n", x);
    print_value();

    return 0;
}

void print_value(void)
{
    printf("%d\n\n", x);
}