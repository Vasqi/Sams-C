/* gotoIt.c - demonstrates the goto statement */

#include <stdio.h>

int main(void)
{
    int n;

start:                                      // a goto target

    puts("\nEnter a number between 1 and 10: ");
    scanf("%d", &n);

    if (n < 0 || n > 10)
    {
        goto start;
    }
    else if (n == 0)
    {
        goto location0;
    }
    else if (n == 1)
    {
        goto location1;
    }
    else
    {
        goto location2;
    }

location0:
{
    puts("You entered 0.\n\n");
    goto end;
}
location1:
{
    puts("You entered 1.\n\n");
    goto end;
}
location2:
{
    puts("You entered something between 2 and 10.\n\n");
}

end:

    return 0;
}

/* a goto statement must be withing the same function as their target
but they can be in different blocks. 
REASONS NOT TO USE GOTO:
    You don't need it. No programming task requires it. You can always use C's other branching statements.
    It's DANGEROUS:     
    The goto statement might seem like an ideal solution for certain programing problems, but it's easy to abuse.
    When program execution branches with a goto statement, no record is kept of where the execution came from,
    so the execution can weave through the program willy-nilly. This type of programing is known as spaghetti code. */