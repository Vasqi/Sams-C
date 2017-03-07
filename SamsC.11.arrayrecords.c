/* arrayrecords.c - Demonstrates using arrays of structures */

#include <stdio.h>

#define NAME        20
#define NUMBER      13
#define PEOPLE       4

struct entry{                   // define a structure to hold entries
    char fname[NAME];
    char lname[NAME];
    char phone[NUMBER];
};

struct entry list[PEOPLE];           // declare an array of structures

int i;

int main(void)
{
    for (i = 0; i < PEOPLE; i++)    // loop to input data for (all) PEOPLE
    {
        printf("\nEnter first name: ");
        scanf("%s", list[i].fname);
        printf("Enter last name: ");
        scanf("%s", list[i].lname);
        printf("Enter phone number in 123-456-7890 format: ");
        scanf("%s", list[i].phone);
    }

    puts("\n");                     // two blank lines

    for (i = 0; i < PEOPLE; i++)    // loop display data
    {
        printf("Name: %s, %s\t\t%s\n", list[i].lname, list[i].fname, list[i].phone);
    }

    puts("\n");

    return 0;
}