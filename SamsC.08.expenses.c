/* expenses.c - Demonstrates use of an array */
/* Declare an array to hold expenses, */
/* and a counter variable. */

#include <stdio.h>

float expenses[13];
int count;
float year_expenses = 0;

int main(void)
{
    /* input data from keyboard to array */

    for (count = 1; count < 13; count++)
    {
        printf("\nEnter expenses for month %d: ", count);
        scanf("%f", &expenses[count]);                      // input expenses for each month in array
    }

    /* Print array contents */

    for (count = 1; count <13; count++)
    {
        printf("Month %d =\t$%.2f\n", count, expenses[count]);
        year_expenses += expenses[count];                   // sum array inputs
    }
    printf("Yearly expenses are:\t$%.2f\n", year_expenses);
    return 0;
}