/* switch1.c - demonstrates the switch statement */

#include <stdio.h>

int main()
{
    int reply;

    puts("\nEnter a number between 1 and 5:");
    scanf("%d", &reply);

    switch (reply)
    {
        case 0:
            break;
        case 1:
        {
            puts("\nYou entered 1.\n");
            break;
        }
        case 2:
        {
            puts("\nYou entered 2.\n");
            break;
        }
        case 3:
        {
            puts("\nYou entered 3.\n");
            break;
        }
        case 4:
        {
            puts("\nYou entered 4.\n");
            break;
        }
        case 5:
        {
            puts("\nYou entered 5.\n");
            break;
        }

        default:
        {
            puts("\nOut of range, try again!\n");           // this does not loop back, program exits
        }
    }


    return 0;
}