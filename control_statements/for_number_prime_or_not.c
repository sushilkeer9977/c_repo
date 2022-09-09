//program to check whether the given number is prime or not.
#include<stdio.h>
main()
{
    int n,i,count;
    printf("Enter n:");
    scanf("%d", &n);

    count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    
    printf("Number of factors are:%d\n", count);

    if(count==2)
    {
        printf("Number is prime\n");
        printf("number is:%d",n);
    }
    else
    {
        printf("Number is not prime\n");
        printf("number is:%d",n);
    }

}