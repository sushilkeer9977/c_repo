//program to find given number is even or odd.

#include<stdio.h>

main()
{
    int n;
    printf("Enter a number to find given number even or odd:");
    scanf("%d", &n);

    if(n%2==0)
        printf("Given number is even");

    else
        printf("Given number is odd"); 
}