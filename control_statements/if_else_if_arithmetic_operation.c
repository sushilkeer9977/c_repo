// program to perform arithmetic operation based on users choice.
#include<stdio.h>
int main()
{
    char arithmetic_symbol;
    int x,y;

    printf("Enter arithmetic symbol to perform operation:");
    scanf("%c", &arithmetic_symbol);

    printf("Enter any number for perform operation:");
    scanf("%d%d", &x,&y);

    if(arithmetic_symbol=='+')
    {
        printf("sum is:%d", x+y);
    }
    else if(arithmetic_symbol=='-')
    {
        printf("sub is:%d", x-y);
    }
    else if(arithmetic_symbol=='*')
    {
        printf("product is:%d", x*y);
    }
    else if(arithmetic_symbol=='/')
    {
        printf("divison is:%f", (float)x/y);
    }
    else
    {
        printf("invalid operation");
    }

    return 0;
}