// program to write given value less then or greater then.

#include<stdio.h>
main()
{
    int x,y;
    printf("Enter value:");
    scanf("%d%d", &x,&y);

    if(x<y)
    {
        printf("x is less then to y\n");
        printf("x value is small to y");
    }
    else
    {
        printf(" x value is greater then to y\n");
        printf("x value is big to y");
    }
}