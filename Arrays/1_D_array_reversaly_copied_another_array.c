/* Program to copy x array to y array reversely:
(or)
Program to print reverse array: */
#include<stdio.h>
main()
{
    int x[10],y[10],n,i;

    printf("Enter no. of element:"); //read no. of element (how many want user).
    scanf("%d", &n);

    printf("Enter x-array element:"); //read x-array element
    for(i=0;i<n;i++)
        scanf("%d", &x[i]);

    for(i=0;i<n;i++)
        y[n-i-1] = x[i]; //copied x-array element into reversaly order in y-array element

    for(i=0;i<n;i++)
        printf("x[%d] = %d\t y[%d] = %d\n", i,x[i], i,y[i]);

}