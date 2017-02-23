/* Demonstration of using scanf() */

#include <stdio.h>

#define QUIT    4

int get_menu_choice(void);

int main(void)
{
    int choice              = 0;
    int int_var             = 0;
    float float_var         = 0.0;
    unsigned unsigned_var   = 0;

    while (choice != QUIT)
    {
        choice = get_menu_choice();

        if (choice == 1)
        {
            puts("\nEnter a signed decimal integer (e.g. -123)");
            scanf("%d", &int_var);
        }
        if (choice == 2)
        {
            puts("\nEnter a floating point number \
                (e.g. 1.23)");
            scanf("%f", &float_var);
        }
        if (choice == 3)
        {
            puts("\nEnter an unsigned decimal interger \
                (e.g. 123)");
            scanf("%u", &unsigned_var);
        }
    }
    printf("\nYour values are:\nint: \t\t%d \nfloat: \t\t%f \nunsigned: \t%u \n\n", 
                                                int_var, float_var, unsigned_var);          // reports incorrect float, adding digit at the end
    
    return 0;
}

int get_menu_choice(void)
{
    int selection = 0;

    do
    {
        puts("\n1 - Get a signed decimal integer");
        puts("2 - Get a decimal floating-point number");
        puts("3 - Get an unsigned decimal interger");
        puts("4 - Quit");
        puts("\nEnter a Selection: ");

        scanf("%d", &selection);                                                    // if a character is entered, endless loop
    }while (selection < 1 || selection > 4);    

    return selection;
}