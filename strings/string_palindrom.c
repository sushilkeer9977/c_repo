//Program to check whether the given string is palindrome or not:
#include<stdio.h>
#include<string.h>
main()
{
    char x[10],y[10];
    int n,i;

    printf("Enter a string:");
    scanf("%s", x);

    strcpy(y,x);
    
    n=strlen(x);

    for(i=0;x[i]!='\0';i++) // reverse y string.
        y[n-i-1] = x[i];

    if(strcmp(x,y)==0)
    {
        printf("string is palindrom\n.");
        printf("%s", x);
    }
    else
    {
        printf("string is not palindrom\n");
        printf("%s", x);
    }
}