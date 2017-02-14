/* what is wrong with the following code fragment? */
/* MAXVALUES is not the problem! */

for (counter = 1; counter < MAXVALUES; counter++);      // remove ";"
printf("\nCounter = %d", counter);