// program to find given value is greater then  equal to or not.

#include<stdio.h>

main()
{
    int x,y;
    printf("Enter a value:");
    scanf("%d%d", &x,&y);

    if(x>=y)
    {
        printf("x value is greatar then or equal to y\n");
        printf("x value is big or equal to y");
    }
    else
    {
        printf("x value is less then or equal to y\n");
        printf("x value is small or eqaul to y");
    }
}