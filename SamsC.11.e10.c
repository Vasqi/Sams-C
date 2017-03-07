/* BUG BUSTER - what's wrong with the following code? */

/* setting up a union */

union data{
    char a_word[4];
    long a_number;
} generic_variable = {"WOW", 1000};         // a union cannot be initialized for multiple members simultaneously 