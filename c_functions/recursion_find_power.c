//Program to find power value using RECURSION:
#include<stdio.h>
int power(int,int);
int power(int n,int p)
{
    if(p==0)
        return 1;
    else
        return n*power(n,p-1);
}
main()
{
    int k;
    k=power(4,3);
    printf("4 power 3:%d", k);
}
