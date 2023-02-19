
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{

    /*
        calculate the area of the circle
        by its radius and PI
    */
    int radius = 10;
    float circle_area = PI * radius * radius;

    printf("The area of the circle is %f\n", circle_area);


    /*
        calculate the gross price based on the
        net price and sales tax
    */

    const float SALES_TAX = 0.1;
    float net_price = 100;
    float gross_price = net_price + net_price * SALES_TAX;

    printf("The gross price is %f\n", gross_price);

    return 0;
}