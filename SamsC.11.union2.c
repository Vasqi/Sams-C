/* union2.c - Example of a typical use of union. */

#include <stdio.h>

#define CHARACTER       'C'
#define INTEGER         'I'
#define FLOAT           'F'

struct generic_tag{
    char type;
    union shared_tag {
        char    c;
        int     i;
        float   f;
    } shared;
};

void print_function(struct generic_tag generic);

int main(void)
{
    struct generic_tag var;                             // declares an instance "var" of type "generic_tag"

    var.type = CHARACTER;
    var.shared.c = '$';
    print_function(var);                                // call the function with struct var as argument

    var.type = FLOAT;
    var.shared.f = (float) 12345.67890;
    print_function(var);

    var.type = 'x';
    var.shared.i = 111;
    print_function(var);

    puts("\n");

    return 0;
}

void print_function(struct generic_tag generic)
{
    printf("\n\nThe generic value is... ");
    switch(generic.type)                                    // introduces switch()
    {
        case CHARACTER: printf("%c",    generic.shared.c);
                        break;                              // introduces "break"
        case INTEGER:   printf("%d",    generic.shared.i);
                        break;
        case FLOAT:     printf("%f",    generic.shared.f);
                        break;
        default:        printf("an unknown type: %c\n", generic.type);
                        break;
    }
}