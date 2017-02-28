/* show 2 ways to assign the value 100 to the third element of data[]. */

#include <stdio.h>

int data[3];

int main(void)
{
    int count;

    data[2] = 100;          // method 1

    for (count = 0; count < 3; count++)
    {
        data[count] = count;
    }

    return 0;
}