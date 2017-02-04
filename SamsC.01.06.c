#include <stdio.h>

/* Modify SamsC.01.03.c: line 11 : printout is 10 lines of new type of garbage*/

int x, y;

int main( void )
{
	for ( x = 0; x < 10; x++, printf( "\n") )
		for ( y = 0; y < 10; y++ )
			printf("%c", 1);				/* modification: replaced "X" with "%c", 1 */

			return 0;
}