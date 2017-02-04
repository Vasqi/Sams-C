/* ex02-04.c: prints Alphabet in uppercase */
#include <stdio.h>

int main(void)
{
    int ctr;

    for( ctr = 65; ctr < 91; ctr++ )
        printf("%c", ctr);

        printf("\n");
        return 0;
}
/* end of program */