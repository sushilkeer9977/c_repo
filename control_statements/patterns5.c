//(pattern-5)program to print following patterns
#include<stdio.h>
main()
{
    int n,i,j,p; //p is middle value
    printf("Enter n:");
    scanf("%d", &n);

    p = n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==p || j==p)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}