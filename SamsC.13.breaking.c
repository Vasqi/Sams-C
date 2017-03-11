/* demonstrates the break statement */

#include <stdio.h>

char s[] = "This is a test string. It contains two sentences.";

int main(void)
{
    int count;
    printf("\nOriginal string: %s", s);

    for (count = 0; s[count] != '\0'; count++)      // continue until null character
    {
        if (s[count] == '.')
        {
            s[count + 1] = '\0';                    // insert null character after period
            break;
        }
    }
    printf("\nModified string: %s\n\n", s);

    return 0;
}