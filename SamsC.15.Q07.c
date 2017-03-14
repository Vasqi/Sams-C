/* How would the function that you wrote */
/* a prototype for in SamsC.15.Q06.c */
/* know how many elements are in the array */
/* of pointers passed to it? */

void function(char *ptr[]);         // function prototype

int main(void)
{
    char *letters[26];              // to declare an array of pointers to characters with 26 elements

    function(*letters[26]);         // call the function with array of pointers as argument (number of elements indicated)
}