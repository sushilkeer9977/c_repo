//Program to copy one string to another using strcpy() function:
#include<stdio.h>
#include<string.h>
main()
{
    char x[10],y[10];

    printf("Enter a string:");
    scanf("%s", x);

    strcpy(y,x);
    printf("x = %s\t y = %s", x,y);

}