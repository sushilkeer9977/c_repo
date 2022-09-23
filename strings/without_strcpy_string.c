//Write a program to copy one string to another without using strcpy() function:
#include<stdio.h>
main()
{
    char x[20],y[20];
    int i;

    printf("Enter a string:");
    scanf("%s", x);

    for(i=0;x[i]!='\0';i++)
    {
        y[i] = x[i];
    }
    y[i] = '\0';

    printf("x = %s\t y = %s",x,y);
}