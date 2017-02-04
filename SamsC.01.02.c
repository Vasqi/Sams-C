#include <stdio.h>
/* calculate Area of a circle given Radius */

float radius, area;	/* modified type int to type float */

float main( void )		/* modified type int to type float */
{
	printf( "Enter radius (i.e. 10): " );
	scanf( "%f", &radius );							/* modified "%d" to "%f" */
	area = (float) (3.14159 * radius * radius);		/* modified type int to type float */
	printf( "\n\nArea = %f\n", area );				/* modified %d to %f */
	return 0;
}