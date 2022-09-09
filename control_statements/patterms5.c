//(pattern-5) program to print following pattern.
#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter n:");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || i==n || i==j)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}
