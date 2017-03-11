/* BUG BUSTER - Is there anything wrong with the following code? */

switch (choice)
{
    default:                                    // default at begining without break and no {}
        printf("You did not choose 1 or 2");
    case 1:                                     // missing {}
        printf("You answered 1");
        break;
    case 2:
        printf("You answered 2");
        break;
}

/*
switch (choice)
{
    case 1:
    {
        printf("You answered 1");
        break;
    }                                    
    case 2:
    {
        printf("You answered 2");
        break;
    }
    default:
    {
        printf("You did not choose 1 or 2");
    }                                    
}
*/