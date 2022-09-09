//Program to print Reverse Number using while loop.
#include<stdio.h>
main()
{
    int n,r,d;
    printf("Enter n:");
    scanf("%d", &n);

    r=0;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }

    printf("Reverse number is:%d", r);
}