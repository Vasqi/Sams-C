/* write a scanf()statement that could be used to get a character, */
/* an unsigned decimal integer, */
/* and another single character */

#include <stdio.h>

int main(void)
{
    char xC = 0, yC = 0;
    unsigned xU = 0;

    scanf("%c %u %c", &xC, &xU, &yC);       // <--

    return 0;

}