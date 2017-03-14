/* Again, using array from SamsC.15.Q03.c */
/* which of the following compairisons is true? */

array[0][0] == &array[0][0][0];      // true
array[0][1] == array[0][0][1];       // false
array[0][1] == &array[0][1][0];      // true