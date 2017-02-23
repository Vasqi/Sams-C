/* ussing SamsC.07.escape.c, complete the print_report() function */
/* so that it prints the rest of Table 7.1 */

// Table 7.1
// ----------------------------------------------------------------
//      Sequence        Meaning
// ----------------------------------------------------------------
//      \a              Bell (alert)            *
//      \b              Backspace               *
//      \f              Form feed                   *   42  behaves exactly like \n
//      \n              New line                *
//      \r              Carriage return             *   34  this returns to the begining of the same line
//      \t              Horizontal tab          *
//      \v              Vertical tab                *   74  behaves exactly like \n
//      \\              Backslash               *
//      \?              Question mark           *
//      \'              Single quotation            *   34
//      \"              Double quotation        *
// ----------------------------------------------------------------

/* Demonstration of frequently used escape sequences */

#include <stdio.h>

#define QUIT    3

int get_menu_choice(void);
void print_report(void);

int main(void)
{
    int choice = 0;

    // I had to change printf() to puts() in order to use \r on the next line without the line after it overwriting it.
    puts("\n\"We\'d like to welcome you to the menu program\"\r");    // demonstrates: \n and \" and \' and \r                                                
    printf("Are you ready to make a choice\?\n");                       // demonstrates: \n and \?
    while (choice != QUIT)
    {
        choice = get_menu_choice();

        if (choice == 1)
            printf("\nBeeping the computer\a\a\a\f");                     // demonstrates: \n and \a
        else 
        {
            if (choice == 2)
            print_report();
        }   
    }
    printf("You chose to quit!\n\n");                                   // demonstrates: \n

    return 0;
}

int get_menu_choice(void)
{
    int selection = 0;

    do
    {
        printf("\n");                                                   // demonstrates: \n
        printf("\n1\tBeep Computer");                                   // demonstrates: \n and \t
        printf("\n2\tDisplay Report");                                  // demonstrates: \n and \t
        printf("\n3\tQuit");                                            // demonstrates: \n and \t
        printf("\n");                                                   // demonstrates: \n
        printf("\nEnter a Selection: ");                                // demonstrates: \n

        scanf("%u", &selection);
    }while (selection < 1 || selection >3);

    return selection;
}

void print_report(void)
{
    printf("\v\v\vSAMPLE REPORT");                                      // demonstrates: \v
    printf("\n\nSequence\tMeeting");                                    // demonstrates: \n and \t
    printf("\n=========\t=======");                                     // demonstrates: \n and \t
    printf("\n\\a\t\tbell (alert)");                                    // demonstrates: \n and \t and \\ */
    printf("\n\\b\t\tbackspace");                                       // demonstrates: \n and \t and \\  */
    printf("\n...\t\t...");                                             // demonstrates: \n and \t
}