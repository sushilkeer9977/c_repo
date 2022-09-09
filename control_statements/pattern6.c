//program to print swastic pattern shape.
#include<stdio.h>
main()
{
    int n,i,j,p;
    printf("Enter n:");
    scanf("%d", &n);
    
    p=n/2+1;
    for(i=1;i<=n;i++) // number of rows
    {
        for(j=1;j<=n;j++) // number of coloumns
        {
            if((i==p || j==p) || (j==1 && i<=p) || (i==n && j<=p) || (j==n && i>=p) || (i==1 && j>=p))
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}