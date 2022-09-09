//(series-4) program to find sum of the series using for.
#include<stdio.h>
main()
{
    int n,sum,i,x;
    printf("Enter n:");
    scanf("%d", &n);

    sum=0;
    x=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i*i*i*i*i*i;
        x=-x;
    }
    
    printf("Sum of the series is:%d", sum);
}