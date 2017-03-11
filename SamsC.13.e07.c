/* ON YOUR OWN - write a program that works like a calculator. */
/* the program should allow for addtion, subtraction, */
/* multiplication, and division */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x, y;
    float answer;
    char operator;

    puts("\nEnter a mathematical expression: \n");
    scanf("%f %c %f", &x, &operator, &y);

    switch (operator)
    {
        case 43:                                    // ASCII value for '+'
        {
            answer = x + y;
            break;
        }
        case 45:                                    // ASCII value for '-'
        {
            answer = x - y;
            break;
        }
        case 42:                                    // ASCII value for '*'
        {
            answer = x * y;
            break;
        }
        case 47:                                    // ASCII value for '/'
        {
            answer = x / y;
            break;
        }
        default:
        {
            printf("\nThat is an unrecognized operator. Exiting ... \n\n");
            exit(1);
        }
    }
    printf("\nASCII value for operator: %d\n", operator);           // to show ASCII
    printf("\n%.2f %c %.2f = \t%.2f\n\n", x, operator, y, answer);

    return 0;
}
