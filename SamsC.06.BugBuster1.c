/* what is wrong with the following code fragment */

record = 0
while (record < 100)
{
    printf("\nRecord %d", record);
    printf("\nGetting next number... ");
}

// the value of record is NOT being modified to eventually make the condition false
// therefore the loop will never end