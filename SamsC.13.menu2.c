/* switch1.c - demonstrates the switch statement */

#include <stdio.h>
#include <stdlib.h>

#define DELAY       150000000       // used in delay loop

int menu(void);
void delay(void);

int main()
{
    int command = 0;
    command = menu();

    while (command != 5)
    {
        /* Get user's selection, then branch baced on input */

        switch (command)
        {
            case 1:
            {
                puts("\nExecuting task A.");
                delay();
                break;
            }
            case 2:
            {
                puts("\nExecuting task B.");
                delay();
                break;
            }
            case 3:
            {
                puts("\nExecuting task C.");
                delay();
                break;
            }
            case 4:
            {
                puts("\nExecuting task D.");
                delay();
                break;
            }
            default:        /* if I change switch expression (i.e. input) to type char, default triggers every time */
            {
                printf("\n%d Out of range, try again!\n", command);
                delay();
                break;
            }

        }                                                       // end of switch
        command = menu();
    }                                                           // end of while

    // case 5:                                                     exit program
    
    puts("\nExiting program now...\n\n");   /* I had to extract this from loop because it was already excluded */
    delay();
    
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