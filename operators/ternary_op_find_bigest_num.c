// program to find biggest number 2 using ternary oprator.

#include<stdio.h>

main()
{
    int x,y, largest;
    printf("Enter value for find biggest value:");
    scanf("%d%d", &x,&y);

    largest = (x>y) ? x : y;
    printf("bigest value is:%d", largest);

}