//(series-2) program to find sum of the series using for loop.
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
        sum=sum+i*i*x;
        x=-x;
    }

    printf("sum of the series are:%d", sum);


}