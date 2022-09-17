//Program to append 2 arrays alternatively:
#include<stdio.h>
main()
{
    int x[10],y[10],z[20],n,i;

    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter x-arrays elements:");
    for(i=0;i<n;i++)
        scanf("%d", &x[i]);
    
    printf("Enter y-arrays elements:");
    for(i=0;i<n;i++)
        scanf("%d", &y[i]);
    
    for(i=0;i<n;i++)
    {
        z[2*i] = x[i];
        z[2*i+1] = y[i];
    }

    for(i=0;i<n*2;i++)
        printf("z[%d] = %d\n", i,z[i]);
}