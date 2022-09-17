//Program to find sum of elements of Array:
#include<stdio.h>
main()
{
    int x[10],n,i,sum;

    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter x-arrays elements:");
    for(i=0;i<n;i++)
        scanf("%d", &x[i]);

    sum=0;
    for(i=0;i<n;i++)
        {
            sum=sum+x[i];
        }
        printf("sum of elements is:%d", sum);
    
}