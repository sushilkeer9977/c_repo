// find the area of circle and area of perimeter.

#include<stdio.h>

main()
{
    float pi = 3.14, r = 45.6, a, p;

    a = pi*r*r;
    p = 2*pi*r;

    printf("area of circle is: %f", a);
    printf(" \n area of perimeter is %f", p);
}