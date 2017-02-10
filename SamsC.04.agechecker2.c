// Demonstrates "if" and "else" statements and some of C's relational operators

#include <stdio.h>
#define CURRENTYEAR 2017

int birth_year, age;

int main(void)
{
    printf("Enter the year you were born: ");
    scanf("%d", &birth_year);

    // Two tests to calculate weather the user was born on a leap year

    if (birth_year % 4 == 0)
        printf("You were born on a leap year!\n");
    else                                                                // this line is the only change from previous version
        printf("You were not born in a leap year!\n");

    age = CURRENTYEAR - birth_year;

    // Can check on voting age as well as drinking age

    if (age >= 18)
        printf("You can vote this year!\n");
    if (age < 21)                                                       //modification: changed from "<=" to just "<"
        printf("It is illegal for you to drink alcohol!\n");

        return 0;

}