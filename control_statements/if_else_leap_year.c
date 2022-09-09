//program to check leap year or not.
#include<stdio.h>
main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    if(year%4==0 && !(year%100==0) || year%400==0)
    {
        printf("This year is leap year\n");
        printf("year is:%d", year);

    }
    else
    {
        printf("This year is not leap year\n");
        printf("year is:%d", year);
    }
}