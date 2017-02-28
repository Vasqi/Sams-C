/* continuing from SamsC.09.e02.c */

    /* If you have a type int variable named cost */
    /* how would you declare and initialize */
    /* a pointer named p_cost that points to that variable? */

    int cost;                                       // declares variabe cost
    int *p_cost;                                    // declares pointer p_cost
    p_cost = &cost;                                 // initializes pointer p_cost to "point at" (or store) address of cost

/* how would you assigne the value 100 */
/* to the variable cost using both dirrect and indirrect access */

/* for write access */

cost = 100;                                         // direct assignment of value 100 to variable cost

printf("Enter value for cost: ");                   // type "100" from keyboard - ENTER
scanf("%d", &cost);                                 // indirect assignment to variable cost

/* for read access */

printf("\nDirect access, cost = %d", cost);         // reads the value of a variable
printf("\nIndirect access, cost = %d", *p_cost);    // reads value of variable from pointer

// NOTE: do not use *p_cost = 100
// because this would set the pointer to point at address: 12, not the value assignment of "12" for cost.
