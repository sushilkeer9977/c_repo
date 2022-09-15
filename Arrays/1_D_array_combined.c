//Program to append (Combine) 2 arrays:
#include<stdio.h>
main()
{
    int x[10],y[10],z[20],n,i; 

    printf("Enter number of elements:"); //read no. of elements(user wants).
    scanf("%d", &n);

    printf("Enter x-array elements:"); //read x-array elements
    for(i=0;i<n;i++)
        scanf("%d", &x[i]);

    printf("Enter y-array elements:"); //read y-array elements
    for(i=0;i<n;i++)
        scanf("%d", &y[i]);

    for(i=0;i<n;i++) //combained x-array and y-arrays elements
        {
            z[i] = x[i];
            z[n+i] = y[i];
        }
        

    for(i=0;i<n*2;i++)
        printf("z[%d] = %d\n", i,z[i]);

}