/* simplestruct.c - Demonstrates the use of simple structures. */

#include <stdio.h>

struct coord {                  // declare struct coord
    int x;                      // identify variable "x" of coord
    int y;                      // identify variable "y" of coord
} myPoint;                      // define coord as myPoint

int main(void)
{
    /* initialize coord variables */
    myPoint.x = 12;
    myPoint.y = 14;

    printf("\nThe coordinates of myPoint are: (%d, %d).\n\n", myPoint.x, myPoint.y);    // demonstrate reading variables of struct coord

    return 0;
}
