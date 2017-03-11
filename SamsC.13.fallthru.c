/* Another use of a switch statement */

#include <stdio.h>
#include <stdlib.h>                                         // for exit()

int main(void)
{
    int reply;

    while (1)
    {
        puts("\nEnter a value between 1 and 10, '0' to exit: ");
        scanf("%d", &reply);

        switch (reply)
        {
            case 0:
                puts("\nExiting program selected!\n");
                exit(0);                                    // exits program
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            {
                puts("\nYou entered 5 or below. \n");
                break;
            }
            case 6:
            case 7:
            case 8: 
            case 9:
            case 10:
            {
                puts("\nYou entered 6 or higher.\n");
                break;
            }
            default:
                puts("\nBetween 1 and 10, please!\n");
        }                                                   // end of switch
    }                                                       // end of while
    return 0;
}