/* write a function that accepts two strings. */
/* Count the number of characters in each, */
/* and return a pointer to the longer string. */

//returns a "pointer" (i.e. a character array)?

#include <stdio.h>

char string1[257] = "How are you";
char string2[257] = "today?";
char string3[257];
char longer[257];
int x1;

void longer_string(char array1[], char array2[]);                       // this function has no return value

int main(void)
{
    longer_string(string1, string2);

    puts("");
    puts(string3);                                                      // a pointer returned from within function
    puts("");

    return 0;
}


void longer_string(char array1[], char array2[])
{
    int x1 = 0, count_string1 = 0, count_string2 = 0, bigger = 0;


    for (x1 = 0; string1[x1] != '\0'; x1++)                                 // count string1
    {
        count_string1 = x1;
        // printf("\nstring1 is:\t %d characters long.", count_string1);
    }

    for (x1 = 0; string2[x1] != '\0'; x1++)                                 // count string2
    {
        count_string2 = x1;
        // printf("\nstring2 is:\t %d characters long.", count_string2);
    }
    
    if (count_string1 > count_string2)                                      // is string1 longer?
    {
        bigger = count_string1;

        for (x1 = 0; string1[x1] != '\0'; x1++)
        {
            string3[x1] = string1[x1];
        }
    }

    else
    {
        bigger = count_string2;

        for (x1 = 0; string2[x1] != '\0'; x1++)
        {
            string3[x1] = string2[x1];
        }
    }
}