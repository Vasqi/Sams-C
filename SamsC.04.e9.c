/* write an "if" statement that determines whether someone is */
/* leagally an adult (age 21) */
/* but not a senior citizen (age 65)*/

#include <stdio.h>

#define CURRENTYEAR 2017

int year_born, age;

int main (void)
{
    printf("\nWhat year were you born: ?\n");
    scanf("%d", &year_born);

    age = CURRENTYEAR - year_born;                                  // it is important that this be placed AFTER "year_born" receives value from standard input

    if ((age >= 21) && (age < 65))
    {
        printf("That'll do just fine!\n");
        printf("At age %u, you're in your prime!\n\n", age);
        return 0;
    }
    else
    {
        printf( "Age %u is out of the desired range!\n\n", age);
        return 0;
    }
} 