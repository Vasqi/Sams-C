/* using typedef from SamsC.11.e07.c */
/* allocate and initialize an element called myaddress. */

#define ADDRESS     31
#define ZIP         11
#define BOOK        1000                    // holds 1000 addresses

struct place {
    char address1[ADDRESS];
    char address2[ADDRESS];
    char city[ADDRESS];
    char state[ADDRESS];
    char long_zip[ZIP];
} address[BOOK];                            // declare array of struct

typedef struct {
    place *myaddress;                       // a pointer instance of place
} RECORD;

myaddress = malloc(BOOK * sizeof(place));   // allocate space for myaddress (array)

myaddress = address;                        // initialize myaddress to point at first element address[0]