//Program to find sum of first n numbers without using formula:
#include<stdio.h>
main()
{
    int n,i,sum;
    printf("Enter n:");
    scanf("%d", &n);

    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of number is:%d", sum);
}