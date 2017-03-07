/* BUG BUSTER- what's wrong with the following code? */

struct {
    char zodiac_sign[21];
    int month;
} sign = "Leo", 8;

// initialization should read:       sign = { "Leo", 8 };