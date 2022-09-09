//Program to check whether the given number is Armstrong Number:
#include<stdio.h>
main()
{
    int n,d,sum,temp;
    printf("Enter n:");
    scanf("%d", &n);

    temp=n;

    sum=0;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }

    if(sum==temp)
        {
            printf("Given number is armstrong\n");
            printf("number is:%d", temp);
        }
        else
        {
            printf("Given number is not armstrong\n");
            printf("number is:%d", temp);
        }
}