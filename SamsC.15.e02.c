/* BUG BUSTER:  Is anything wrong with the following code? */

int x[3][12];
int *ptr[12];
ptr = x;

// ptr is an array of pointers to variables type int
// ptr is a pointer to ptr[0], which is the first pointer in the array
// ptr = x; is changing ptr from a uni-dimensional array of pointers, 
// to a pointer of a multidimensional array of variables type int 