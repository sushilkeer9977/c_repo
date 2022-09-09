// program to perform arithmetic operation.Read value at runtime.

#include<stdio.h>

main()
{
    int x,y;

    printf("Enter number to perform operation:");
    scanf("%d %d", &x, &y);

    printf("addition is:%d\n subtraction is:%d\n multiplication is:%d\n division is:%d\n reminder is:%d",x+y, x-y, x*y, x/y, x%y);
}