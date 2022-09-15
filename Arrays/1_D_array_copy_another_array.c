//Program to copy [assign] one array to another:
#include<stdio.h>
main()
{
    int x[10],y[10],i,n;

    printf("Enter number of element:");  //read number of element (how many element wants user).
    scanf("%d", &n);
    printf("no. of element are:%d\n", n);

    printf("Enter x-array elements:"); //read x-array elements 
    for(i=0;i<n;i++)
        scanf("%d", &x[i]);

    for(i=0;i<n;i++)
        y[i] = x[i]; //copied x-array element to y-array

    for(i=0;i<n;i++)
        printf("x[%d] = %d\t y[%d] = %d\n",i,x[i],i,y[i]);



}