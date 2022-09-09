//(pattern-1)program to print following patterns.


#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter n:");
    scanf("%d", &n);


    for(i=1;i<=n;i++) //print number of rows
    {
        for(j=1;j<=n;j++) //print number of columns
        {
            printf(" * ");
        }
        printf("\n");
    }
}