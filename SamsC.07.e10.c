/* write a program that inputs two floating point numbers from the keyboard */
/* and then displays their product */

#include <stdio.h>

int main(void)
{
    float x1 = 0.0, x2 = 0.0;

    puts("\nType 2 floating point numbers and press ENTER");
    scanf("%f %f", &x1, &x2);

    printf("\nThe product of these two numbers is:\n%f\n\n", x1 * x2);

    return 0;
}