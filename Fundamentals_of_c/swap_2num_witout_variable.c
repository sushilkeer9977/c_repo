// program to swp to numbers. (without taking any varible).

#include<stdio.h>

main()
{
    int x=40, y=30;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x is: %d \n y is:%d", x, y);
}