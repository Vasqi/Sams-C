/* menu.c - Demonstrates using an infinite loop */
/* to implement a menu system */

#include <stdio.h>

#define DELAY       150000000       // used in delay loop

int menu(void);
void delay(void);

int main(void)
{
    int choice;

    while (1)                       // (1) will always be true, so infinite loop
    {
        choice = menu();            // get the user selection

        /* branch based on input */

        if (choice == 1)            
        {
            puts("\nExecuting task A.");
            delay();
        }
        else if (choice == 2)
        {
            puts("\nExecuting task B.");
            delay();
        }
        else if (choice == 3)
        {
            puts("\nExecuting task C.");
            delay();
        }
        else if (choice == 4)
        {
            puts("\nExecuting task D.");
            delay();
        }
        else if (choice == 5)
        {
            puts("\nExecuting program now...\n\n");
            delay();
            break;                                      // terminates the loop
        }
        else
        {
            puts("\nInvalid choice, select again.");
            delay();
        }
    }

    return 0;
}

int menu(void)                                          // Display's a menu and accepts user selection
{
    int reply;

    puts("");
    puts("Enter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to exit the program.");

    scanf("%d", &reply);                                /* !!! if input is type char, infinite loop */

    return reply;                                       // return goes to choice
}

void delay(void)                                        // provies short pause after reply before repeating menu options
{
    long x;
    for (x = 0; x < DELAY; x++)
        ;                                               // loop for long pause
}

/* for some strange reason,
if I change input to type char
so that non-numeric inputs will not be problematic
at any input, next iteration of menu cycles through
then automaticaly triggers default,
then cycles through menu once more before stopping */