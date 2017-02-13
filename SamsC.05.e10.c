/* Write a program that uses a function to find the average */
/* of five type float values entered by the user */

#include <stdio.h>

float b, c, d, e, f;
float a;

float average(float b, float c, float d, float e, float f);

int main()
{
     b = c = d = e = f = 0;

    puts("\n Provide 5 numbers: \n");
    scanf("%f %f %f %f %f", &b, &c, &d, &e, &f);                        // allows for decimal input (e.g. currency)

    a = average(b, c, d, e, f);                                         // only necessary for line 20

    printf("\nThe average of: %.2f, %.2f, %.2f, %.2f, and %.2f, is %.2f!\n\n", b, c, d, e, f, a);   // not really necessary
    return 0;
}

float average( float b, float c, float d, float e, float f)
{
    float x;                                                            // allows for decimal output (e.g. currency)
    float z;

    z = (b + c+ d + e + f);                                             // in order for "z" to be float output, the right side of the equation must also be float
    x = z / 5;                                                          
    printf("Sum of input\t= %.2f\n", z);                                // just wanted to see what's going on in the numerator
    printf("Average\t\t= %.2f/5\t= %.2f", z, x);                        // just wanted to see what's going on with x (useful output)
    return x;                                                           // only necessary for line 18 and 20
}