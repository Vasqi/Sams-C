/* ex02-2.c */                                              //e: this line contains a comment
#include <stdio.h>

void display_line(void);                                    //c: this line contains a function prototype

int main(void)
{
    display_line();
    printf(" Teach Yourself C In One Hour a Day!\n");       //a: this line contains a statement (modification: removed preceeding \n)
    display_line();

    return 0;                                               //a: this line contains a statement
}

/* print astrisk line */                                    //e: this line contains a comment
void display_line(void)                                     //d: this line contains a function definition
{
    int counter;                                            //b: this line contains a variable definition 

    for( counter = 0; counter < 37; counter++ )             /* modification: changed 30 to 37 for improved output */
        printf("=" );                                       //a: this line contains a (modification: changed * to =)
        printf("\n");                                       /* modification: added statement for improved output readability */
}
/* end of program */                                        //e: this line contains a comment