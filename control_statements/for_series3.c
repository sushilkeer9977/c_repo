//(series-3)program to find sum following series using for loop.
#include<stdio.h>
main()
{
    int n,i;
    float sum;
    printf("Enter n:");
    scanf("%d", &n);

    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(float)1/i;
    }

    printf("Sum of the series is:%.2f",sum);
}