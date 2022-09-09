//Program to print multiplication table of given number using for loop.
#include<stdio.h>
main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d", &n);

    for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",n,i,n*i);
}