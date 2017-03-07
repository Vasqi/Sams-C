/* pointerstep.c - Demonstrates stepping through */
/* an array of structures using pointer notation.*/

#include <stdio.h>

#define MAX     4
#define N       12

struct part{                    // define a structure
    short number;
    char name[N];
} data[MAX] = { {1, "Thomas"},          // declare and initialize an array of 4 structures
                {2, "Christopher"},
                {3, "Andrew"},
                {4, "Benjamin"}
                };

struct part *p_part;                    // declare a pointer to type part
int count;                              // declare count variable

int main(void)
{
    p_part = data;                      // initialize a pointer to the first array element

    for (count = 0; count < MAX; count++)
    {
        printf("\nAt address %p: %d %s", p_part, p_part->number, p_part->name);     // because simply using "data" as pointer does not work
        p_part++;                                                                   // nor would "data++" be accepted
    }
    puts("\n");

    return 0;
}