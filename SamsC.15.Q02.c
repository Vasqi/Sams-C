/* Continuing from SamsC.15.Q01.c */
/* Say you want to use a pointer to a pointer */
/* to assign the value 100 to the variable x. */
/* What if anything is wrong with the following assignment statement? */

*ppx = 100;

/* if it isn't correct, how should it be written? */

**ppx = 100;