/* BUG BUSTER: find the errors in the following program*/

// missing: #include <stdio.h>
// missing: function prototype: int get_1_or_2( void);
// missing: int main(void){}
// missing: function call from main()

int get_1or_2( void )       // this is a function definition, not a program
{
    int answer = 0;
    while (answer < 1 || answer >2)
    {
        printf(Enter 1 for Yes, 2 for No);      //could've used puts() and missing "" inside printf()
        scanf("%f", answer);                    // should've used "%u" instead of %f, which will conflict with line 11
    }
    return answer;
}