/* BUG BUSTER - Is anything wrong with the following code? */

switch (answer)
{
    case 'Y': printf("You answered yes");            // statements of case 'Y' are not enclosed in {}
        break;
    case 'N': printf("You answered no");            // statements of case 'N' are not enclosed in {}
}                                                   // missing "default:" case

/*
switch (answer)
{
    case 'Y':
    {
        printf("You answered yes");
        break;
    }
    case 'N':
    {
        printf("You answered no");
    }
    default:
    {
        //statements
    }
}
*/