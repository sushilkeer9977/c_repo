//program to print prime numbers between 1 to 20 using nested for loop.
#include<stdio.h>
main()
{
    int n,count,i,e,s;
    printf("Enter s-starting and e-ending value:");
    scanf("%d%d", &s,&e);

    for(n=s;n<=e;n++)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count==2)
            printf("%d\n",n);
    }
}