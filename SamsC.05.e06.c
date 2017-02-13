/* Rewrite SamsC.05.roomassign.c so that it need only one return statement in the room_assign() function. */

/* Demonstrates using multiple return statements in a function. */

#include <stdio.h>

char last_init;
int room;

int room_assign(char last_init);                                // takes char variable and return int

int main(void)
{
    puts("\nEnter first initial of your last name: ");          // puts() - meaning "put the string to the standard output"
    scanf("%c", &last_init);

    room = room_assign(last_init);

    printf("\nYou need to report to room %d.\n\n", room);

    return 0;
}

int room_assign(char li)                                        // seems strange that I can switch out "last_init" for "li" without consequence
{
    int x;
    
    (((li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M')) ? (x = 1045) : (x = 1055));
    return x;
}