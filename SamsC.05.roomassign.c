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
    if ((li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M'))   // checks both lower and uppercase
        return 1045;
    else
    {
        return 1055;
    }
}