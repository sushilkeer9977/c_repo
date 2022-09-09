//Program to print even numbers at run time using for loop:
#include<stdio.h>
main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d", &n);

    for(i=2;i<=n;i=i+2)
        printf("%d\n",i);
}