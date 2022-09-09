//program to month number between (1-12) and print number of daysin month using if else.
#include<stdio.h>
#include<string.h>
main()
{
    int month_num;
    char month_name[100];
    printf("Enter a month number:");
    scanf("%d", &month_num);

    if(month_num==1)
    {
        printf("contains 31 days\n");
        strcpy(month_name, "January");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==2)
    {
        printf("contains 28/29 days");
        strcpy(month_name, "Fabruary");
        printf("month num is:%d\n", month_num, month_name);
    }
    else if(month_num==3)
    {
        printf("contains 31 day\n");
        strcpy(month_name, "March");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==4)
    {
        printf("contains 30 days\n");
        strcpy(month_name, "April");
        printf("month name is:%s\n month name is:%s", month_name, month_name);
    }
    else if(month_num==5)
    {
        printf("contains 31 days\n");
        strcpy(month_name, "May");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==6)
    {
        printf("contains 30 days\n");
        strcpy(month_name, "June");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==7)
    {
        printf("contains 31 days\n");
        printf("month num is:%d", month_num);
        strcpy(month_name, "July");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==8)
    {
        printf("contains 31 days\n");
        strcpy(month_name, "Agust");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==9)
    {
        printf("contains 30 days\n");
        strcpy(month_name, "September");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==10)
    {
        printf("contains 31 days\n");
        strcpy(month_name, "Octomber");
        printf("month num is:%d\n onth name is:%s", month_num, month_name);
    }
    else if(month_num==11)
    {
        printf("contains 30 days\n");
        strcpy(month_name, "Novenamber");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else if(month_num==12)
    {
        printf("contains 31 days\n");
        strcpy(month_name, "Decenmber");
        printf("month num is:%d\n month name is:%s", month_num, month_name);
    }
    else
    {
        printf("invalid month");
    }
}