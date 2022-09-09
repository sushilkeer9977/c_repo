//Program to find sum of digits using RECURSION:
#include<stdio.h>
int sum(int);
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+sum(n/10);
}
main()
{
    int k;
    k=sum(128);
    printf("sum of digit is:%d", k);
}