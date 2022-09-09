// program to input week number (1-7) and print thr corresponding day of week name using if else.
#include<stdio.h>
main()
{
    int day_num;
    printf("Enter day number for print day name:");
    scanf("%d", &day_num);

    if(day_num==1)
    {
        printf("day is monday\n");
        printf("day num is:%d", day_num);
    }
    else if (day_num==2)
    {
        printf("day is tuesday\n");
        printf("day num is:%d", day_num);
    }
    else if(day_num==3)
    {
        printf("day is thrusday\n");
        printf("day num is:%d", day_num);
    }
    else if(day_num==4)
    {
        printf("day is friday\n");
        printf("day num is:%d", day_num);
    }
    else if(day_num==5)
    {
        printf("day is satureday\n");
        printf("day num is:%d", day_num);
    }
    else if(day_num==6)
    {
        printf("day is sunday\n");
        printf("day num is:%d", day_num);
    }
    else
    {
        printf("invalid day");
    }
    
}