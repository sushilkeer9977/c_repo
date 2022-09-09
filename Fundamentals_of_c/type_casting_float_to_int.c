// program to find the area of Parallelogram. Read at run time value, change value float to int using type casting.

#include<stdio.h>

main()
{
    float bash, hight, area, perimeter;

    printf("Enter a values for find area of parallelogram:");
    scanf("%f %f", &bash, &hight);

    area = (int)bash*hight;
    perimeter =2*(bash+hight);

    printf("Area is: %f \n Perimeter is: %f", area, perimeter);

}

