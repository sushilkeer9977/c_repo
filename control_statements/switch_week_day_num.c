//Program to display weekday name of given weekday number.
#include<stdio.h>
main()
{
    int weekday_num;
    printf("enter week day number:");
    scanf("%d", &weekday_num);

    switch(weekday_num)
    {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("wednusday");
            case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("sunday");
            break;

        default:
            printf("invalid day");
    }
}