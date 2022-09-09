//Program to find area and perimeter of the circle by reading radius value from keyboard:

#include<stdio.h>

main()
{
    float pi=3.14, r, area, perimeter;

    printf("Enter radius value:");
    scanf("%f", &r);

    area = pi*r*r;
    perimeter = 2*pi*r;

    printf("Area of circle is:%f \n Perimeter of cicle is:%f", area, perimeter);
}