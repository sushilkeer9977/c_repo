// program to find the area and perimeter of the rectangle .read value at run time 

#include<stdio.h>

main()
{
    int b, l, area, perimeter;

    printf("Enter a value");
    scanf("%d %d", &b, &l);
    area = b*l;
    perimeter = 2*(l+b);

    printf("Area is: %d \n Perimeter is:%d", area, perimeter);
}