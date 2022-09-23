//Program to concatenate 2 strings:
#include<stdio.h>
#include<string.h>
main()
{
    char x[20],y[20];

    printf("Enter string:");
    scanf("%s%s",x,y);

    strcat(x,y);

    printf("%s",x);
}