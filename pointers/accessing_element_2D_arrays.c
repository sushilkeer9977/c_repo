//Accessing 2D-arrays elements using pointer.
#include<stdio.h>
main()
{
    int x[2][3] = {10,20,30,40,50,60},*p,i,j;

    p=&x[0][0];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\n", *p++);
    }
}