/* write a program that inputs 10 integer values from the keyboard */
/* and then displays their sum. */

#include <stdio.h>

int main(void)
{
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0, x10 = 0;

    puts("\nType 10 floating point numbers and press ENTER");
    scanf("%d %d %d %d %d %d %d %d %d %d", &x1, &x2 , &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10);

    printf("\nThe sum of these numbers is:\n%d\n\n", x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10);

    return 0;
}