/* ptrmulti.c - demonstrates passing a pointer (to a multi dimensional array) to a function */

#include <stdio.h>

#define FIRST       3 
#define SECOND      4

void printarray_1(int (*ptr) [SECOND]);
void printarray_2(int (*ptr) [SECOND], int n);

int main(void)
{
    int multi[FIRST][SECOND] =   { { 1, 2, 3, 4 },         // declare and initialize multi-dimensional array type int
                                 { 5, 6, 7, 8 },
                                 { 9, 10, 11, 12 } };

    int (*ptr) [SECOND], count;                         // *ptr is a pointer to an array of 4 ints.

    ptr = multi;                                        // set ptr to point to the first element of multi 

    /* pointer is incremented to next element of multi, with each loop */

    for (count = 0; count < FIRST; count++)
    {
        printarray_1(ptr++);                            // calls the first function
    }

    puts("\n\nPressEnter...");
    getchar();

    printarray_2(multi, FIRST);                         // calls the second function
    puts("\n");

    return 0;
}

void printarray_1(int (*ptr) [SECOND])              // prints the elements of a single SECOND-element integer array
{
    int *p, count;                                  // p is a pointer to type int. you must use a typecast
    
    p = (int *)ptr;                                 // to make p equal to the address in ptr.

    for ( count = 0; count < SECOND; count++)
    {
        printf("\n%d", *p++);
    }
}

void printarray_2(int (*ptr) [SECOND], int n)       // prints the elements of an n by SECOND-element integer array
{
    int *p, count;
    p = (int *)ptr;

    for (count = 0; count < (SECOND * n); count++)
    {
        printf("\n%d", *p++);
    }
}

// (int *) is a typecast, which temporarily changes the variable's data type from its declared type to a new one
// the typecast is required when assigning the value of ptr to p because they are pointers to different types.
// p is a pointer to type int, whereas ptr is a pointer to an array of 4 integers

// char (*letters)[26];     to declare a pointer to an array of characters
// char *letters[26];       to declare an array of pointers to characters