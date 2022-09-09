//Program to check whether the given number is perfect or not:
#include<stdio.h>
main()
{
    int n,sum,i;
    printf("Enter n:");
    scanf("%d", &n);

    sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("Number is perfect\n");
        printf("number are:%d",n);
    }
    else
    {
        printf("Number is not perfect\n");
        printf("number are:%d", n);
    }
}