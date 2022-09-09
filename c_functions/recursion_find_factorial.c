//Program to find factorial of a number using RECURSION:
#include<stdio.h>
int fact(int);
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
main()
{
    int k;
    k=fact(4);
    printf("4! is:%d\n", k);
    printf("5! is:%d", fact(5));
}