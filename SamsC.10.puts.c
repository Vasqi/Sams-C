/* Demonstrates displaying strings with puts() */

#include <stdio.h>              // for puts()

char *message1 = "C";           // pointer to a string
char *message2 = "is the";
char *message3 = "best";
char *message4 = "programing";
char *message5 = "language!!";

int main(void)
{
    puts("");                   // puts() cannot be compleely empty.
    puts(message1);             // puts contains an initialized pointer of type char
    puts(message2);
    puts(message3);
    puts(message4);
    puts(message5);
    puts("");

    return 0;
}