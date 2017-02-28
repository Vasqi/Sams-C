/* write a function named sumarrays() */
/* that accepts two arrays as arguments */
/* totals all values in both arrays, */
/* and returns the total to the calling program. */




int sumarrays(int array1[], int array2[]);                      // function prototype



int sumarrays(int array1[], int array2[])                       // function definition
{
    int x1, sum_array1 = 0, sum_array2 = 0;

    for (x1 = 0; array1[x1] != 0; x1++)
    {
        if (x1 == 0)
        {
            sum_array1 = array1[x1];
        }
        else                                                      // accumulate values
        {
            sum_array1 += array1[x1];
        }
        
    }

    for (x1 = 0; array2[x1] != 0; x1++)
    {
        if (x1 == 0)
        {
        sum_array2 = array2[x1];
        }
        else                                                    // accumulate values
        {
            sum_array2 += array2[x1];
        }
        
    }
    
    return sum_array1 + sum_array2;
}