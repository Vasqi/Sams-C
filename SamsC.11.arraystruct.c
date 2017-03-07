/* Demonstrates array structures */

#include <stdio.h>

#define NAMESIZE        30

struct data{                        // define and declare a structure to hold data
    float amount;                   // float variable
    char fname[NAMESIZE];           // char variable
    char lname[NAMESIZE];           // char variable
} rec;

int main(void)
{
    printf("\nEnter the donor's First and last name: ");        //Enter data from keyboard
    scanf("%s %s", rec.fname, rec.lname);                       // array names are pointers to arrays, therefore "&" not needed

    printf("\nEnter the donation amount: $");
    scanf("%f", &rec.amount);                                   // notice use of "&" -  address of (variable) 

    printf("\nDonor %s %s gave $%.2f.\n\n", rec.fname, rec.lname, rec.amount);

    return 0;
}