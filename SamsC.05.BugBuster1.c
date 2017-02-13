/* what's wrong with the following listing? */

#include <stdio.h>
void print_msg( void );                             // input paramete and return type is set to void
int main( void )
{
    print_msg( "This is a message to print" );      // attempting to pass string to void parameter
    return 0;
}
void print_msg( void )
{
    puts( "This is a message to print" );           // attempting to return type int to type void
    return 0;
}