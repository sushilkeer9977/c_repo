//Program to find sum of first n numbers without using formula:
#include<stdio.h>
main()
{
    int n,sum,i;
    printf("Enter n:");
    scanf("%d", &n);

    sum=0;
    i=1;

    while(i<=n)
        {
            sum=sum+i;
            i++;
        }

        printf("sum of first number is:%d",sum);
}