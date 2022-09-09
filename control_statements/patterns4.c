//(pattern-4) program to print following patterns.
#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1;i<=n;i++) //number of rows
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}