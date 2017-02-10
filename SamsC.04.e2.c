/* rewrite code from SamsC.04.e1.c to be more readable */

#include <stdio.h>

int x,y;

int main( void )
{ 
    printf( "\nEnter two numbers: " );
    scanf( "%d %d", &x, &y );
    printf( "\n%d is bigger\n\n", ( x > y ) ? x : y );
    return 0;
}