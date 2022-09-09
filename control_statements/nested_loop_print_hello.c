//program to print "Hello" read value at run time.
#include<stdio.h>
main()
{
    int i,j,n;

    printf("Enter n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++) // i=> number of rows.
    {
        for(j=1;j<=n;j++) // j=> number of columns.
        {
            printf(" Hello "); 
        }
        printf("\n");
    }
    
}