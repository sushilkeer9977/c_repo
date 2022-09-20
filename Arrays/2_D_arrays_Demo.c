#include<stdio.h>
main()
{
    int x[2][3];
    int i,j;

    for(i=0;i<2;i++) // reading x-arrays elements
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    for(i=0;i<2;i++) // printing x-arrays element
    {
        for(j=0;j<3;j++)
        {
            printf("X arrays element:%d\n", x[i][j]);
        }
    }

}