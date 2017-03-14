/* sort.c - Inputs a list of strings from the keyboard */
/* sorts them, and then displays them on the screen */
// 1:   Accept lines of input from the keyboard
//      one at a time until a blank line is encountered.
// 2:   Sort the lines into alphabetical order.
// 3:   Display the sorted lines on screen.
/* get_lines() */
// 1:   Keep track of the number of lines entered,
//      and return the value to the calling program 
//      after all the lines have been entered.
// 2:   Don't allow input from more than a preset maximum number of lines.
// 3:   Allocate storage space for each line.
// 4:   Keep track of all lines by storing pointers to strings in an array.
// 5:   Return to the calling program when a blank line is encountered.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES        25

int get_lines(char *lines[]);                   
void sort(char *p[], int n);
void print_strings(char *p[], int n);

char *lines[MAXLINES];

int main(void)
{
    int number_of_lines;

    number_of_lines = get_lines(lines);             // call the first function

    printf("\nYou typed %d lines. Here they are, resorted into (ASCII) alphabetical order:\n\n", number_of_lines);                                       //??
    if (number_of_lines <= 0)                        // confirm allocated memory (changed '<' to '<=')
    {
        puts("\nMemory allocation error!");
        exit(-1);
    }

    sort(lines, number_of_lines);                   // call the second function
    print_strings(lines, number_of_lines);          // call the third function
    puts("\n");

    return 0;
}

int get_lines(char *lines[])                        // read in lines from the keyboard
{
    int n = 0;
    char buffer[200];                                // temporary storage for each line (memory allocation)

    puts("\nEnter one line at a time; enter a blank line when done.");

    while ((n < MAXLINES) && (fgets(buffer, 200, stdin) != 0) && (buffer[0] != '\0'))   // replaced gets() with fgets()
    {
        if ((lines[n] = (char *)malloc(strlen(buffer)+1)) == NULL)  // this is merely testing a condition that will ALLWAYS be false
        {
            puts("ERROR:    buffer = NULL!");       // added error message (no hits)
            return -1;
        }
        else if (buffer[0] == '\n')                 // I had to add this to get the loop to terminate on blank line when using fgets()
        {
            break;
        }
        strcpy(lines[n++], buffer);                 // WARNING: ** unconfirmed memory allocation **
    }

    return n;
}                                                   // end of get_lines()

void sort(char *p[], int n)                         
{
    int a, b;
    char *tmp;

    for (a = 0; a < n; a++)                         //<-- edit: from "a = 1" to "a = 0"
    {
        for (b = 0; b < n - 1; b++)
        {
            if (strcmp(p[b], p[b + 1]) > 0)
            {
                tmp = p[b];
                p[b] = p[b + 1];
                p[b + 1] = tmp;
            }
        }
    }
}

void print_strings(char *p[], int n)
{
    int count;

    for (count = 0; count < n; count++)
    {
        printf("%d:\t%s", count + 1, p[count]);     // added line number
    }
}
/* strings that begin with Capital letters, are output before strings that begin in lowercase */
/* in accordance with ascii */


// there are so mant typos in this book!