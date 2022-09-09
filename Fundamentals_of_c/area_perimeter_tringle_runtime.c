//program to find the area and perimeter of trigle. Read value at run time.

#include<stdio.h>

main()
{
    int h, b, x, y, z, area, perimeter;

    printf("Enter a value:");
    scanf("%d %d %d %d %d", &h, &b, &x, &y, &z);

    area = 2*(h*b);
    perimeter = x + y + z;
    printf("Area is:%d \n Perimeter is:%d", area, perimeter);
}