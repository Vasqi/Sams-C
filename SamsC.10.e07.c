/* ON YOUR OWN: Write a function that accepts two strings. */
/* use memalloc() function to allocate enough memory */
/* to hold the two strings after they have been */
/* concatenated (linked). Return a pointer to this new string. */

#include <stdio.h>
#include <stdlib.h>                                                     // for malloc() and free()

char string1[257] = "How are you";
char string2[257] = " today?";
char *string3;

int x1;

void cat_string(char array1[], char array2[]);                          // this function has no return value

int main(void)
{
    string3 = malloc(257 * sizeof(char));

    cat_string(string1, string2);

    puts("");
    
    puts(string3);                                                      // a pointer returned from within function
    
    puts("");

    free(string3);

    return 0;
}


void cat_string(char array1[], char array2[])
{
    int x1 = 0, x2; 


    for (x1 = 0; string1[x1] != '\0'; x1++)                                 // count string1
    {
        string3[x1] = string1[x1];                                                   
    }

    x2 = x1++;                                          // this gives new starting point to copy next string

    for (x1 = 0; string2[x1] != '\0'; x1++)                                 // count string1
    {
        string3[x1 + x2] = string2[x1];                                     // continues where it left off
       
    }
   
}