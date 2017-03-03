/* Demonstrates using scanf() to input numeric and text data */

#include <stdio.h>

char lname[257], fname[257];
int count, id_num;

int main(void)
{
    puts("\nEnter last name, first name, ID# seporated");       // Prompt the user
    puts("by spaces, then press ENTER.");

    count = scanf("%s%s%d", lname, fname, &id_num);             // input the 3 data items

    printf("\n%d items entered: %s %s %d \n\n", count, fname, lname, id_num);

    return 0;
}