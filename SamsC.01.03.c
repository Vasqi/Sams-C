#include <stdio.h>

/* writes a series of 10 newlines, each containing "XXXXXXXXXX", which inturn boggs down the CPU with 5% -> 78% usage */

int x, y;

int main( void )
{
	for ( x=0; x < 10; x++, printf( "\n") )
		for ( y = 0; y < 10; y++ )
			printf("X");

			return 0;
}