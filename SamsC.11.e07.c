/* Create a structure containing 5 strings: */
// address1,
// address2,
// city,
// state,
// and zip.
/* Create a typedef called RECORD */
/* that can be used to creat instances of this structure */

#define ADDRESS     31
#define ZIP         11
#define BOOK        1000                    // holds 1000 addresses

struct place {
    char address1[ADDRESS];
    char address2[ADDRESS];
    char city[ADDRESS];
    char state[ADDRESS];
    char long_zip[ZIP];
};

typedef struct {
    place address[BOOK];
} RECORD;