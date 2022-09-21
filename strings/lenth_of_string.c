//Program to find string length using strlen() function:
#include<stdio.h>
#include<string.h>
main()
{
    char x[20];
    int n;

    printf("Enter any string:");
    scanf("%s", x);

    n=strlen(x);

    printf("string lenth is:%d", n);
    
}