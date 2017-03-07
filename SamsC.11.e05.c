/* Continuing with exersize 4 */
/* show 2 ways of using pointer notation */
/* to assign the value 5.5 to the first */
/* float member of info */

/* write a code that declares and initializes a pointer to info */

struct data {
    int     product_id;
    float   price;
    float   tax_rate;
} info;                         // declare "info" as an instance of type data

/* using structure name */

info.product_id = 100;          // initialize "info" int = 100

data *p_info;                   // declare pointer type data (where "info" is type data)

p_info = info;                  // initialize pointer to point at info (an instance of type data)

/* using a pointer to a structure with the indirection operator (*) */

(*p_info).price = 5.5;          // method 1 - assign value to struct member from pointer

/* using a pointer to a structure with the indirect membership operator */

p_info->price = 5.5;            // method 2 - assign value to struct member from pointer