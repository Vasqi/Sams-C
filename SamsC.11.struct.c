/* Demonstrate structures that contain other structures as members. */

/* Recieves corner coordinates of a rectangle and calculates area. */

#include <stdio.h>
#include <stdlib.h>                                 // for abs() (length and width: absolute value)

int length, width;
long area;

struct coord{
     int x;                                 
     int y;                                 
};

struct rectangle{
    struct coord topleft;                           // declares instance of struct coord as member of struct rectangle
    struct coord bottomrt;                          // declares instance of struct coord as member of struct rectangle
} mybox;                                            // defines struct rectangle with instance "mybox"

int main(void)
{
    /* Enter coordinates from keyboard */

    printf("\nEnter top left \"x\" coordinate: ");
    scanf("%d", &mybox.topleft.x);

    printf("\nEnter top left \"y\" coordinate: ");
    scanf("%d", &mybox.topleft.y);

    printf("\nEnter bottom right \"x\" coordinate: ");
    scanf("%d", &mybox.bottomrt.x);

    printf("\nEnter bottom right \"y\" coordinate: ");
    scanf("%d", &mybox.bottomrt.y);

    width = abs(mybox.bottomrt.x - mybox.topleft.x);            // calculate width
     printf("\nThe width is:\t%ld units.\n\n", width);   

    length = abs(mybox.bottomrt.y - mybox.topleft.y);           // calculate length
     printf("\nThe length is:\t%ld units.\n\n", length); 
    
    area = width * length;                                      // calculate area

    printf("\nThe Area is:\t%ld units.\n\n", area);

    return 0;
}