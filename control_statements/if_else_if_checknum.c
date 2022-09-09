// program to check whether the given number is +ve(positive), -ve(negetive), zero.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d", &number);

    if(number>0)
    {
        printf("Number is positive\n");
        printf("num is:%d", number);
    }
    else if(number<0)
    {
        printf("Number is negetive\n");
        printf("num is:%d", number);
    }
    else if(number==0)
    {
        printf("Number is 0");
    }

    return 0;

}