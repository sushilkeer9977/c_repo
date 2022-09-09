// program to check given number is odd or even using ternary operator.

#include<stdio.h>
main()
{
    int num;
    printf("enter value is odd or even:");
    scanf("%d", &num);

   (num%2==0) ? printf("even\n") : printf("odd\n");
 
}