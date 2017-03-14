/* ON YOUR OWN: write a program that declares a 12x12 array of characters */
/* Place X's in every other element. */
/* Use a pointer to the array to print the values to the screen in a grid format. */

#include <stdio.h>

#define MAX     12

char (*ptr)[MAX];                                           // declare pointer to multi-dimensional array
char array[MAX][MAX];                                       // declare multi-dimensional array

void fill_array(char (*ptr)[MAX], int n);                   
void print_array(char (*ptr)[MAX], int n);                  

int main(void)
{
    ptr = array;                                            // point ptr to array pointer (initialize ptr)

    fill_array(ptr, MAX);                                   // pass pointer to fill_array()
    print_array(ptr, MAX);                                  // pass pointer to print_array()

    return 0;
}

void fill_array(char (*ptr)[MAX], int n)                    // assigns every other element as 'X'
{
    int a, b, *p;
    
    for (a = 0; a < n; a++)
    {
        for (b = 0; b < n; b++)
        {
            switch (b % 2)
            {
                case 0:                                     // b is an even number
                {
                    ptr[a][b] = 32;                         // ascii for " "
                    break;
                }
                default:                                    // b is not an even number
                {
                    ptr[a][b] = 88;                         // ascii for 'X'
                    break;
                }
            }
        }
    }
    
}

void print_array(char (*ptr)[MAX], int n)                   // array displayed as a grid
{
    int a, b, *p;
    
    puts("");

    for (a = 0; a < n; a++)
    {
        for (b = 0; b < n; b++)                             
        {
            printf("[%c]\t", ptr[a][b]);                    // element displayed in brackets to reveal empty elements
        }
        puts("");
    }
    puts("\n");

}