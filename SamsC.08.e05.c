/* BUG BUSTER: what is wrong with the following code fragment? */

int x, y;                               // index counter variable has been omited
int array[10][3];

int main(void)
{
    for (x = 0; x < 3; x++)             // using input variable as index
        for (y = 0; y < 10; y++)        // using input variable as index
            array[x][y] = 0;            // "x" and "y" as input variables: and each "for" statement should utalize {} for clairity
    return 0;
}

                                        // also, x variable has been attributed as a counter of three, in an array declared for 10 elements
                                        // also, y variable has been attributed as a counter of 10, in an array declaed for 3 elements