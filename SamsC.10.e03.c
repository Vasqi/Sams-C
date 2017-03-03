/* write a line of code that allocates storage for the string */
/* "Pointers are fun!" as in SamSC.10.e02, */
/* but without using an array */

#include <stdlib.h>                     // for malloc() and free()
char *ptr;

int main(void)
{
    ptr = malloc(18 * sizeof(char));
}