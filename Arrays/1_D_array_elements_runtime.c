//Example program to demonstrate elements at run time  1D-Array:
#include<stdio.h>
main()
{
    int x[4] = {},i;

    printf("Enter 1-D array elements:");

    for(i=0;i<4;i++)
    {
        scanf("%d", &x[i]);
    }
    printf("elements are:%d\n", x[i]);

}