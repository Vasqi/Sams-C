/* continuing with SamsC.11.e02.c */
/* how could you assignthe value 100 */
/* to the integer member of the structure named info? */

struct data {
    int     product_id;
    float   price;
    float   tax_rate;
} info

info.product_id = 100;                   // initialize "info" int = 100

