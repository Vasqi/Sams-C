/* printfdemo.c - demonstration of printf() */

#include <stdio.h>

#define JUNK        80                          // defines stdin characters clearing limit

void clear_kb(void);                            // clears scanf()

int main(void)
{
    char *m1 = "Binary";
    char *m2 = "Decimal";
    char *m3 = "Octal";
    char *m4 = "Hexidecimal";
    float d1 = 10000.123;
    int n;

    puts("\n1:\tOutputing a number with different field widths.\n");
    printf("%5f\n", d1);
    printf("%10f\n", d1);
    printf("%15f\n", d1);
    printf("%20f\n", d1);
    printf("%25f\n", d1);

    puts("\nPress Enter to continue...");

    //fflush(stdin);
    clear_kb();                                 // because fflush() doesn't work in linux
    getchar();

    puts("2:\tUse the * field width specifier to obtain field width");
    puts("\tfrom a variable in the arguments list.\n");

    for (n = 5; n <= 25; n += 5)
    {
        printf("%*f\n", n, d1);
    }

    puts("\nPress Enter to continue...");

    //fflush(stdin);
    clear_kb();                                 // because fflush() doesn't work in linux
    getchar();

    puts("3:\tInclude leading zeroes.\n");
    printf("%05f\n", d1);
    printf("%010f\n", d1);
    printf("%015f\n", d1);
    printf("%020f\n", d1);
    printf("%025f\n", d1);

    puts("\nPress Enter to continue...");

    //fflush(stdin);
    clear_kb();                                 // because fflush() doesn't work in linux
    getchar();

    puts("4:\tDisplay in octal, decimal, and hexidecimal.");
    puts("\tUse # to precede octal and hex output with O and OX.");
    puts("\tUse - to left justify each value in its field.");
    puts("\tFirst display column lables.\n");

    printf("%-15s%-15s%-15s", m2, m3, m4);

    for (n = 1; n < 20; n++)
    {
        printf("\n%-15d%-#15o%-#15X", n, n, n);
    }
    puts("\n\nPress Enter to continue...");

    //fflush(stdin);
    clear_kb();                                 // because fflush() doesn't work in linux
    getchar();

    puts("5:\tUse the %n conversion command to count characters.\n");

    printf("%s%s%s%s%n", m1, m2, m3, m4, &n);

    printf("\n\nThe last printf() output %d characters.\n\n", n);

    return 0;
}

void clear_kb(void)
{
    char junk[JUNK];                            // used type char to accept all keyboard inputs
    fgets(junk, JUNK, stdin);                   // accepts input < JUNK, until \r.
}

// printf(string); = fprintf(string, stdout);