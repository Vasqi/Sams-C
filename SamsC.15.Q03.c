/* assume that you have declared an array as follows: */

 int array[2][3][4];

/* What is the structure of this array, as seen by  the C compiler? */

// array is a pointer to a pointer of a pointer to an array of [24] type int variables.
// array is a pointer to array[0]                               , which is a pointer to a pointer
// array[0] is a pointer to array[0][0]                         , which is a pointer 
// array [0][0] is a pointer to the first element array[0][0][0], which is a variabli type int

/* elements */
//  1:          array[0][0][0]
//  2:          array[0][0][1]
//  3:          array[0][0][2]
//  4:          array[0][0][3]
//  5:          array[0][1][0]
//  6:          array[0][1][1]
//  7:          array[0][1][2]
//  8:          array[0][1][3]
//  9:          array[0][2][0]
//  10:         array[0][2][1]
//  11:         array[0][2][2]
//  12:         array[0][2][3]
//  13:         array[1][0][0]
//  14:         array[1][0][1]
//  15:         array[1][0][2]
//  16:         array[1][0][3]
//  17:         array[1][1][0]
//  18:         array[1][1][1]
//  19:         array[1][1][2]
//  20:         array[1][1][3]
//  21:         array[1][2][0]
//  22:         array[1][2][1]
//  23:         array[1][2][2]
//  24:         array[1][2][3]