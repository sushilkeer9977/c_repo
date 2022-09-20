//Program to demonstrate initializing 2D-Array:
#include<stdio.h>
main()
{
    int x[2][3] = {10,20,30,40,50,60},i,j;
    
    x[1][1] = 500;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("x arrays element is:%d\n", x[i][j]);
    }
    printf("\n");
}