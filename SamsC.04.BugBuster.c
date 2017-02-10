/* Fix the following program so that it runs correctly */

/* a program with problems... */

// #include <stdio.h>
// int x = 1;
// int main( void )
// {
//    if (x = 1);
//    printf(" x equals 1" );
//    otherwise
//    printf(" x does not equal 1");
//    return 0;
// }

#include <stdio.h>
                                                    // added white space
int x = 1;
                                                    // added white space
int main( void )
{
    if (x == 1)                                     // added additional "=" and removed ";"
        printf("\n x equals 1\n\n" );               // added "\n" at the beginning, and "n\n" at the end
    else                                            // changed to "else"
    {
        printf("\n x does not equal 1\n\n");        // added "\n" at the beginning, and "n\n" at the end
    }
    
    return 0;
}