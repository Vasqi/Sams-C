/* structfunc.c - Demonstrates passing structures to a function. */

#include <stdio.h>

#define NAME        30

struct data {                   // declare a function to hold the data
    float amount;
    char fname[NAME];
    char lname[NAME];
}rec;

void print_rec(struct data displayRec);     // function prototype returns no value and takes struct as argument

int main(void)
{
    printf("\nEnter the donor's first and last name: ");       // input data from keyboard
    scanf("%s %s", rec.fname, rec.lname);

    printf("\nEnter the donation amount: $");
    scanf("%f", &rec.amount);

    print_rec(rec);                                             // call the display function (using "instance" name)

    return 0;
}

void print_rec(struct data displayRec)                          // function definition (and prototype above) indicate type "data"
{
    printf("\nDonor %s %s gave $%.2f.\n\n", displayRec.fname, displayRec.lname, displayRec.amount);
}