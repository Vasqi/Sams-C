/* Program to determine what year a person wll turn a specific age */
#include <stdio.h>
#define TARGET_AGE 88

int year1, year2;

int calcYear(int year1);

int main(void)
{
    // Ask the user for their birth year
    printf("What year was the subject born? \n");                                   // modification: added \n
    printf("Enter as 4-digit year (YYYY): ");
    scanf(" %d", &year1);

    // Calculate the future year and display it
    year2 = calcYear(year1);

    printf("Someone born in %d will be %d in %d.\n", year1, TARGET_AGE, year2);     // modification: added \n

    return 0;
}

/* The function to get the future year */
int calcYear(int year1)
{
    return(year1+TARGET_AGE);
}