/* Change SamsC.04.unary.c to count upward instead of downward. */
// this code already counts both upward and downward, so no change necessary
/* Demonstrates unary operator prefix and postfix modes */

#include <stdio.h>

int a, b;

void display_line(void);                                            // borrowed from SamsC.02.02.c

int main(void)
{
    // Sets a and b at 0 to start
    a = b = 0;

    // Start with incremental operator
    // Print them, decrementing each time
    // Use prefix mode for b, postfix mode for a

    display_line();                                                 // borrowed from SamsC.02.02.c
    printf( "||\t\t||\n|| Current values of a and b: \n||" );
    printf( " %d\t|| %d\t||\n||\t||\t||\n", a, b );
    display_line();                                                 // borrowed from SamsC.02.02.c
    printf( "|| Count Up!\t||\n");
    display_line();                                                 // borrowed from SamsC.02.02.c
    printf( "|| Post\t|| Pre  ||\n" );
    display_line();                                                 // borrowed from SamsC.02.02.c

    printf( "|| %d\t|| %d\t||\n", a++, ++b );
    printf( "|| %d\t|| %d\t||\n", a++, ++b );
    printf( "|| %d\t|| %d\t||\n", a++, ++b );
    printf( "|| %d\t|| %d\t||\n", a++, ++b );
    printf( "|| %d\t|| %d\t||\n", a++, ++b );

    display_line();                                                 // borrowed from SamsC.02.02.c
    printf( "||\t\t||\n|| Current values of a and b: \n||" );
    printf( " %d\t|| %d\t||\n||\t||\t||\n", a, b );
    display_line();                                                 // borrowed from SamsC.02.02.c
    printf( "|| Count Down!\t||\n");
    display_line();                                                 // borrowed from SamsC.02.02.c
    printf( "|| Post\t|| Pre  ||\n" );
    display_line();                                                 // borrowed from SamsC.02.02.c

    printf( "|| %d\t|| %d\t||\n", a--, --b );
    printf( "|| %d\t|| %d\t||\n", a--, --b );
    printf( "|| %d\t|| %d\t||\n", a--, --b );
    printf( "|| %d\t|| %d\t||\n", a--, --b );
    printf( "|| %d\t|| %d\t||\n", a--, --b );

    display_line();                                                 // borrowed from SamsC.02.02.c
}

void display_line(void)                                     //d: this line contains a function definition
{
    int counter;                                            //b: this line contains a variable definition 

    for( counter = 0; counter < 18; counter++ )             /* modification: changed 30 to 37 for improved output */
        printf("=" );                                       //a: this line contains a (modification: changed * to =)
        printf("\n");                                       /* modification: added statement for improved output readability */
}