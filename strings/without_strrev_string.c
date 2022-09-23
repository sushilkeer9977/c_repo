//program to reverse a string without using strrev() function:
#include<stdio.h>
#include<string.h>
main()
{
    char x[10],y[10];
    int i,n;

    printf("Enter a string:");
    scanf("%s", x);

    n=strlen(x);

    for(i=0;x[i]!='\0';i++)
        y[n-i-1] = x[i];

    printf("x = %s\t y = %s", x,y);

}