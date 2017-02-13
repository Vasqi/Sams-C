/* write a recursive function to take the value of 3 */
/* to the power of another number. */
/* for example, if 4 is passed, the function will return 81. */
#include <stdio.h>

int three_to_the(int n1, int n2);

int main(void)
{
    int base, exponent, result;
    base = 3;

    puts("\nEnter value of exponent for 3 (positive integer): ");
    scanf("%u", &exponent);             // "%u" for positive only interger
    
    result = three_to_the(base, exponent);

    printf("\n%u^%u = %u\n\n", base, exponent, result);
    return 0;
}

int three_to_the(int base, int exponent)
{
    if (exponent == 0)                  
    {
        return 1;
    }
    else if (exponent != 1)             // because this ranged option is not first, "0" and "1 are excluded"
    {
        return (base * three_to_the(base, exponent - 1));
    }
    else                                // equivelent to (x == 1)
    {
        return base;
    }
}