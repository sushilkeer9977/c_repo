//program to find sum of digits given number.
#include<stdio.h>
main()
{
    int n,sum,d;
    printf("Enter number:");
    scanf("%d", &n);

    sum=0;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }

    printf("sum of the digit is:%d",sum);
}