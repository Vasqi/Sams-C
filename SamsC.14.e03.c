/* write a statement that gets a string of 30 characters or shorter */
/* if an astrisk is encountered, truncate the string */



int count;
char *s;

s = malloc(31 * sizeof(char));

for (count = 0; count < 30; count ++)
{
    getchar(s++);

    if (s == '*')
    {
        s = '\0'
        break;
    }
} 