/* scanfdemos.c - demonstrates some uses of scanf() */

#include <stdio.h>
#define JUNK        80                          // defines stdin characters clearing limit

#define STRING      80

void clear_kb(void);                            // clears stdin, because fflush() does nothing

int main(void)
{
    int i1, i2;
    long l1;
    double d1;
    char buf1[STRING], buf2[STRING];

    /* using the 'l' modifier to enter long integers and doubles */

    puts("\nEnter an integer and a floating point number: ");
    scanf("%ld %lf", &l1, &d1);

    printf("\nYou entered:\t%ld and %lf.\n", l1, d1);
    puts("The scanf() format string used the l modifier to store");
    puts("your input in a type long and a type double.\n");

    //fflush(stdin);
    clear_kb();                                 // to do the job of fflush()

    /* use field width to split input */

    puts("Enter a 5 digit integer (e.g. 54321).");
    scanf("%2d%3d", &i1, &i2);

    printf("\nYou entered:\t%d and %d.\n", i1, i2);
    puts("Note how the field width specifier in the scanf() format");
    puts("string split your input into two values.\n");

    //fflush(stdin);
    clear_kb();                                 // to do the job of fflush()

    /* using an excluded space to split the line of input into two strings */

    puts("Enter your first and last names (seporated by a space): ");
    scanf("%[^ ]%s", buf1, buf2);               // inputs until blank space, overflow goes to next input

    printf("\nYour first name is:\t%s\n", buf1);
    printf("Your last name is:\t%s.\n", buf2);
    puts("Note how [^ ] in the scanf() format string, by excluding");
    puts("the space character, caused the input to be split.\n");

    return 0;
}

void clear_kb(void)
{
    char junk[JUNK];                            // used type char to accept all keyboard inputs
    fgets(junk, JUNK, stdin);                   // accepts input < JUNK, until \r.
}