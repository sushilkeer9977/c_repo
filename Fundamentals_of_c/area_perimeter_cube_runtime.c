// program to find area, surface area, volume, perimeter of cube. Read value at runtime.

#include<stdio.h>

main()
{
    int a, area, perimeter, surface_area, volume;

    printf("Enter a value:");
    scanf("%d", &a);

    area = (6*a)*(6*a);
    perimeter = 12*a;
    surface_area = (4*a)*(4*a)*(4*a)*(4*a);
    volume = a*a*a;

    printf("Area is:%d \n Perimeter is:%d \n Surface_area is:%d \n Volume is:%d", area, perimeter, surface_area, volume);
}