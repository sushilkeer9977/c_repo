/*Program to find sum of squares of first n numbers:
(or)
Program to find sum of following series:*/
#include<stdio.h>
main()
{
    int n,sum,i;
    printf("Enter n:");
    scanf("%d", &n);

    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }

    printf("Sum of squares of first number is:%d", sum);
}