/* BUG BUSTER: find the error(s) in the following code fragment */

printf("Jack said, "Peter Piper picked a peck of pickled peppers."");

// the author opened the string in a quote, 
// but then attempted to add quotes around the thing Jack said without using escape charater
// end result is that what Jack said, will not be printed
// the solution would be as follows below

printf("Jack said, \"Peter Piper picked a peck of pickled peppers.\"");