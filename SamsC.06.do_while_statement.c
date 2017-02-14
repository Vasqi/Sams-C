/* Demonstrates a simple "do" ... "while" Statement. */

#include <stdio.h>

int get_menu_choice(void);

int main(void)
{
    int choice;

    choice = get_menu_choice();

    printf("\nYou chose menu option %u\n\n", choice );

    return 0;
}

int get_menu_choice(void)
{
    int selection = 0;

    do
    {
        printf("\n");
        printf("\n1\tAdd a Record");
        printf("\n2\tChange a Record");
        printf("\n3\tDelete a Record");
        printf("\n4\tQuit");
        printf("\n");
        printf("\nPlease enter a selection number: ");

        scanf("%u", &selection);
    }
    while (selection < 1 || selection > 4 );

    return selection;
}