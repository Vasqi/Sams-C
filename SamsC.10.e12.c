/* ON YOUR OWN: using the ASCII chart, */
/* write a program that prints a box on the screen */
/* using the double-line characters */

// on linux - must use encoding IBM855

#include <stdio.h>

unsigned char top[13] = {201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187}; 
unsigned char sides[13] = {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186};
unsigned char bottom[13] = {200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,188};

int main(void)
{
     puts("");                         
   
        printf("%s\n", top);  
        printf("%s\n", sides); 
        printf("%s\n", sides); 
        printf("%s\n", sides); 
        printf("%s\n", sides); 
        printf("%s\n", sides); 
        printf("%s\n", bottom); 
    
    puts("");

    return 0;
}