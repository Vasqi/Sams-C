/* BUG BUSTER - Will the proceeding (SamsC.12.e09.c) program run? */
/* If not, what's the problem? */
/* Rewrite it so that it is correct. */

#include <stdio.h>
void print_letter2(void);           /* function prototype */

int ctr;
char letter1 = 'X';
char letter2 = '=';

int main(void)
{
    puts("");                       // added whitespace modification to output

    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%c", letter1);
        print_letter2();
    }

    puts("\n");                     // added whitespace modification to output
    return 0;
}

void print_letter2(void)
{
    int ctr;                        // declared ctr as LOCAL to function

    for (ctr = 0; ctr < 2; ctr++)
    printf("%c", letter2);
}

/* answer: no, as written, it is an infinite loop. */
