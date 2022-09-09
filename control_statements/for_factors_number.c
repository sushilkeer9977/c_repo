//Program to print factors & no of factors of given number using for loop.
#include<stdio.h>
main()
{
    int n,i,count;
    printf("Enter n:");
    scanf("%d", &n);

    count = 0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("factors are:%d\n",i);
            count++;
        }
    }
    printf("count of factors are:%d",count);
}
