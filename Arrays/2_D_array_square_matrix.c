//Program to read and print Square Matrix:
#include<stdio.h>
main()
{
    int x[5][5],n,i,j;

    printf("Enter rows & coloumns:");
    scanf("%d", &n);

    printf("Enter x-arrays element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &x[i][j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
}