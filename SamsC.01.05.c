#include <stdio.h>
/* Bug Buster: implicit declaration of function ‘do_it’ on line 7 */

int main( void )
{
	printf( "This is a problem with a " );
	do_it("problem!");						/* undefined reference to `do_it' */
	return 0;
}