/* what's wrong with following function definition? */

int twice(int y);
{
    return (2 * y);     // (2*y is an expression, not an int)
}

// if it had read: 
// x = 2 * y;
// return x;            // that would've been fine