/* Program to demonstrate nesting "for" Statements. */

#include <stdio.h>

void print_table(int outer, int inner);

int main(void)
{
    int inner = 10;
    int outer = 10;

    puts("\nThe multiplications table: \n");    // Title
    print_table(outer, inner);                  // call loop function to draw table

    printf("\n");                               // provides one more empty line at end

    return 0;
}

void print_table(int outer, int inner)
{
    int a, b;
    for (a = 1; a <= outer; a++)
    {
        for (b = 1; b<= inner; b++)
        {
            printf("%u\t", a * b);
        }
        printf("\n");                           // provides new row (i.e. line) after completion of all columns 
    }
    return;
}