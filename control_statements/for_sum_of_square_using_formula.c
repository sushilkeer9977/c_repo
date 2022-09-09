//program to find sum of squares of first numbers using formula.
#include<stdio.h>
main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    printf("sum of squares of first number is:%d", n*(n+1)*(2*n+1)/6);
}