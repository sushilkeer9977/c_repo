//program to print numbers - read n value in run time using for loop.
#include<stdio.h>
main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        printf("%d\n",i);
    
} 