//program c program to check whether a number is divisible by 5 and 11 or not using if else.
#include<stdio.h>
main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(num%5==0 && num%11==0)
    {
        printf("both are divisible\n");
        printf("num is:%d", num);
    }
    else
    {
        printf("both are not divisible\n");
        printf("num is:%d", num);
    }
}