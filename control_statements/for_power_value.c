//Progra to find power value without using pow() function using for loop:
#include<stdio.h>
main()
{
    int n,p,r,i;
    printf("Enter number and power value:");
    scanf("%d%d", &n,&p);

    r=1;
    for(i=1;i<=p;i++)
    {
        r=r*n;
    }

    printf("%d power %d=%d",n,p,r);
}