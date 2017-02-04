/* ex02-05.c */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer[256];

    printf( "Enter your full name and press <Enter>:\n");
    /* fgets( buffer); */                                   // incorrect usage of fgets
    fgets(buffer, sizeof buffer, stdin);                    // correction

    printf( "\nYour name has %d characters and spaces!\n", strlen( buffer )); // modification: added \n at end to improve output

    return 0;
}