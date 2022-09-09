//Define the functions to find area and perimeter of circle:
#include<stdio.h>

float area(float);
float perimeter(float);

float area(float r)
{
    float pi=3.14;
    return pi*r*r;
}
float perimeter(float r)
{
    float pi=3.14;
    return 2*pi*r;
}
main()
{
    float a,p;
    a=area(4.5);
    printf("area of circle is:%f\n", a);

    p=perimeter(7.9);
    printf("area of perimeter is:%f",p);
}