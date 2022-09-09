//program to print perfect numbers between 1 to 100000 using nested loop.
#include<stdio.h>
main()
{
    int n,sum,i,s,e;

    printf("Enter s-starting e-ending value:");
    scanf("%d%d", &s,&e);

    for(n=s;n<=e;n++)
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            sum=sum+i;
        }

        if(sum==n)
            printf("%d\n",n);
    }
}