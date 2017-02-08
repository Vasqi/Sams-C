/* size of.c--Program to tell you the suze of C variable types in bytes */
/* modification: I moved "\n" from begining of each line to the end of each line */
/* modification: I sorted the list from smallest to largest */
/* modification: I omited the indefinite article from each line */
/* modification: I borrowed displayline header from SamsC.02.02.c */

void display_line(void);                                            // borrowed from SamsC.02.02.c

#include <stdio.h>

int main(void)
{
    display_line();                                                 // borrowed from SamsC.02.02.c
    printf("|| Variable types\t||\tBytes Required ||\n");           // modified from SamsC.02.02.c
    display_line();                                                 // borrowed from SamsC.02.02.c
    
    printf( "|| char           \t||\t %d bytes       ||\n", sizeof( char ));                    // -128 to 127
    printf( "|| unsigned char  \t||\t %d bytes       ||\n", sizeof( unsigned char ));           // 0 to 255
    printf( "|| short          \t||\t %d bytes       ||\n", sizeof( short ));                   // -32767 to 32767                  (signed short int)
    printf( "|| unsigned short \t||\t %d bytes       ||\n", sizeof( unsigned short ));          // 0 to 65535
    printf( "|| int            \t||\t %d bytes       ||\n", sizeof( int ));                     // -2,147,483,647 to 2,147,483,647  (signed int)
    printf( "|| unsigned int   \t||\t %d bytes       ||\n", sizeof( unsigned int ));            // 0 to 4,294,967,295
    printf( "|| float          \t||\t %d bytes       ||\n", sizeof( float ));                   // 1.2E-38 to 3.4E+38^1
    printf( "|| long           \t||\t %d bytes       ||\n", sizeof( long ));                    // -2,147,483,647 to 2,147,483,647  (signed long int)
    printf( "|| unsigned long  \t||\t %d bytes       ||\n", sizeof( unsigned long ));           // 0 to 4,294,967,295
    printf( "|| long long      \t||\t %d bytes       ||\n", sizeof( long long ));               // -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
    printf( "|| unsigned long long\t||\t %d bytes       ||\n", sizeof( unsigned long long ));   // 0 to 18,446,744,073,709,551,615
    printf( "|| double         \t||\t %d bytes       ||\n", sizeof( double ));                  // 2.2E-308 to 1.8E+308^2
    printf( "|| long double    \t||\t%d bytes       ||\n", sizeof( long double ));              // 3.4E-4932 to 1.1E+4932

display_line();                                         // borrowed from SamsC.02.02.c

    return 0;
}

void display_line(void)                                     //d: this line contains a function definition
{
    int counter;                                            //b: this line contains a variable definition 

    for( counter = 0; counter < 49; counter++ )             /* modification: changed 30 to 37 for improved output */
        printf("=" );                                       //a: this line contains a (modification: changed * to =)
        printf("\n");                                       /* modification: added statement for improved output readability */
}