/* Demonstration using print() to display numerical values */

#include <stdio.h>

int aI = 2, bI = 10, cI = 50;               // I have replaced single letter variables with double letter variables
float aF = 1.05, bF = 25.5, cF = -0.1;      // I have replaced single letter variables with double letter variables

int main(void)
{
    printf("\nDecimal values without tabs: %d %d %d", aI, bI, cI);              // used %d for int
    printf("\nDecimal values with tabs:\t%d\t%d\t%d", aI, bI, cI);              // used %d for int

    printf("\nThree floats on one line:\t%f\t%f\t%f", aF, bF, cF);              // used %f for float
    printf("\nThree floats on three lines:\n\t%f\n\t%f\n\t%f", aF, bF, cF);     // used %f for float

    printf("\nThe rate is %f%%", aF);                                           // used %f for float
    printf("\nThe rate to two decimal places is: %.2f%%", aF);                  // used %f for float
    printf("\nThe rate to one decimal place is: %.1f%%", aF);                   // used %f for float
    printf("\nThe result of %f/%f = %f\n\n", bF, aF, bF/aF);                    // used %f for float

    return 0;
}