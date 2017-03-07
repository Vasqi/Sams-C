/* union.c - Example of using more than one union member at a time. */

#include <stdio.h>

int main(void)
{
    union shared_tag {
        char    c;
        int     i;
        long    l;
        float   f;
        double  d;
    } shared;

    shared.c = '$';

    printf("\nchar c    = %c",      shared.c);      // CORRECT!
    printf("\nint i     = %d",      shared.i);      // wrong
    printf("\nlong l    = %ld",     shared.l);      // wrong
    printf("\nfloat f   = %f",      shared.f);      // wrong
    printf("\ndouble d  = %f",      shared.d);      // wrong
    puts("\n");

    shared.d = 123456789.8765;

    printf("\nchar c    = %c",      shared.c);      // wrong
    printf("\nint i     = %d",      shared.i);      // wrong
    printf("\nlong l    = %ld",     shared.l);      // wrong
    printf("\nfloat f   = %f",      shared.f);      // wrong
    printf("\ndouble d  = %f",      shared.d);      // CORRECT!
    puts("\n");

    return 0;
}