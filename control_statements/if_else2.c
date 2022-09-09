// program to check  are eligible for neet exam or not.
#include<stdio.h>
main()
{
    int class;
    printf("Enter your class:");
    scanf("%d", &class);

    if(class>=12)
    {
        printf("After class 12th you will give exam n number of time\n");
        printf("You are eligible for neet exam");
    }
    else
    {
        printf("You are not pas class 12th\n");
        printf("You are not eligible for neet exam");
    }
}