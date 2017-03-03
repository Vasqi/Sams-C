/* BUG BUSTER is anything wrong with the following? */

char *string1;                         // initializes a pointer *string1, which is not initialized
char *string2 = "Second";              // initializes a 7 character array
string1 = string2;                      // this will not work

/* in order to copy the contents of string 2 to string1 */

int x1;

for (x1 = 0; string2[x1] != '\0', x1++)
{
    string1[x1] = string2[x1];
}