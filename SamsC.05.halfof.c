/* Illustrates the difference between arguments and parameters */

#include <stdio.h>

float x = 3.5, y = 65.11, z;

float half_of(float k);
void show_z(void);                                              // modification

int main(void)
{
    z = half_of(x);                                             // In this call, x is the argument to half_of()
    /* printf("\nThe value of z = %f\n", z);                       omited */
    printf("\n");
    show_z();                                                   // modification

    z = half_of(y);                                             // In this call, y is the argument to half_of()
    /* printf("The value of z = %f\n", z);                         omited */
    show_z();                                                   // modification

    z =half_of(z);                                              // In this call, z is the argument to half_of()
    /* printf("The value of z = %f\n\n", z);                       omited */
    show_z();                                                   // modification
    printf("\n");

    return 0;
}

float half_of(float k)
{
    return (k/2);   // k is the parameter. Each time half_of() is called, k has the value that was passed to the argument.
}

void show_z(void)                                               // modification
{
    printf("The value of z = %f\n", z);
    return;
}