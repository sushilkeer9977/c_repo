//(series-5) program to find of the following series using series.
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
        sum=sum+i*i*i*i*i*i*i*i*x;
        x=-x;
    }

    printf("Sum of the series is:%d", sum);
}