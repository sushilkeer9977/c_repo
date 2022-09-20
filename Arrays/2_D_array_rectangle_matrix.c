//Program to read & print rectangle matrix or square matrix.
#include<stdio.h>
main()
{
    int x[5][5],m,n,i,j;

    printf("Enter no. of rows and colomns:"); //read no. of row and col.
    scanf("%d%d", &m,&n);

    printf("Enter x-arrays elements:"); //read x-arrays elements
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    for(i=0;i<m;i++) //print x-arrays element.
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}