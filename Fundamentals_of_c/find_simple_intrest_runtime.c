// program to calculate simple interest.

#include<stdio.h>

main()
{
    int p,r,t,si;

    printf("Enter a amount for find simple interest:");
    scanf("%d%d%d",&p,&r,&t);

    si = p*r*t/100;

    printf("amount simple interest is:%d", si);
}