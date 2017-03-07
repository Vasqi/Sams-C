/* write a code that declares and initializes a pointer to info */

struct data {
    int     product_id;
    float   price;
    float   tax_rate;
} info;                         // declare "info" as an instance of type data

info.product_id = 100;          // initialize "info" int = 100

data *p_info;                   // declare pointer type data (where "info" is type data)

p_info = info;                  // initialize pointer to point at info (an instance of type data)