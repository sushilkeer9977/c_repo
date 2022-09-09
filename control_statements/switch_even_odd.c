//Program to check whether the given number is even or odd using switch
#include<stdio.h>
main()
{
    int num;
    printf("Enter a number for check odd or even:");
    scanf("%d", &num);

    switch(num%2)
    {
        case 0:
            printf("Even");
            break;
        case 1:
            printf("odd");
            break;

        default:
            printf("invalid num");
    }
}