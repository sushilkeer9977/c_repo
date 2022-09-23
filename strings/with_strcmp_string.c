//Program to compare 2 strings:
#include<stdio.h>
#include<string.h>
main()
{
    char x[10],y[10];
    int n;

    printf("Enter string:");
    scanf("%s%s", x,y);

    n=strcmp(x,y);

    if(n==0)
        printf("both are equal");
    else if(n>0)
        printf("x is greater then");
    else if(n<0)
        printf("y is grater then");
}