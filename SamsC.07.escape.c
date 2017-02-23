/* Demonstration of frequently used escape sequences */

#include <stdio.h>

#define QUIT    3

int get_menu_choice(void);
void print_report(void);

int main(void)
{
    int choice = 0;

    printf("\n\"We'd like to welcome you to the menu program\"\n");
    printf("Are you ready to make a choice\?\n");
    while (choice != QUIT)
    {
        choice = get_menu_choice();

        if (choice == 1)
            printf("\nBeeping the computer\a\a\a"); // audible bell not working in Terminator but visual alert is active
        else 
        {
            if (choice == 2)
            print_report();
        }   
    }
    printf("You chose to quit!\n\n");

    return 0;
}

int get_menu_choice(void)
{
    int selection = 0;

    do
    {
        printf("\n");
        printf("\n1\tBeep Computer");
        printf("\n2\tDisplay Report");
        printf("\n3\tQuit");
        printf("\n");
        printf("\nEnter a Selection: ");

        scanf("%u", &selection);
    }while (selection < 1 || selection >3);

    return selection;
}

void print_report(void)
{
    printf("\nSAMPLE REPORT");
    printf("\n\nSequence\tMeeting");
    printf("\n=========\t=======");
    printf("\n\\a\t\tbell (alert)");
    printf("\n\\b\t\tbackspace");
    printf("\n...\t\t...");
}