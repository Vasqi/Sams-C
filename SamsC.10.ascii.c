/* Demonstrates printing extended ASCII characters */

#include <stdio.h>

unsigned char mychar;                   // must be unsigned for extended ASCII

int main(void)
{
    puts("");

    for (mychar = 0; mychar < 255; mychar++)                            // for the full spectrum
    {
        printf("ASCII code %u is character:\t%c\n", mychar, mychar);    // print extended ASCII characters 180 - 203 does not display
    }
    puts("");

    return 0;
}

/* NOTE: these characters do not display on my system. Arch Linux  UTF-8 */
// 0 - 31
// 127 - 255
// USE ENCODING: Cyrillic IBM855 will get some 180 - 203 (missing: 181 - 184, 189 - 190, 198 - 199, 207 - 216)