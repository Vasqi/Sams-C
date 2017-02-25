/* BUG BUSTER: what is wrong with the following? */

int array[10];
int x = 1;

int main(void)
{
    for (x = 1; x <= 10, x++)       // using "<=" allows x to be set to "10" (index range is 0 - 9)
        array[x] = 99;              // array[x], where x = 10, is out of range of the array as it was declared on line 3.

        return 0;
}