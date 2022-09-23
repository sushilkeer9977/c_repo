//Program to reverse a string using strrev() function:
#include<string.h>
#include<stdio.h>
main()
{
    char x[10];

    printf("Enter a string:");
    scanf("%s", x);

    strrev(x);

    printf("%s", x);
}