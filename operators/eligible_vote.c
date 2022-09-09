// program to demonstrate you are eligilbe for vote or not.

#include<stdio.h>

main()
{
    int age;
    printf("Enter your age, for you are eligible for vote are not:");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("You are eligible for vote \n");
        printf("Your age is 18 or then 18 above");
    }
    else
    {
        printf("You are not eligible for vote \n");
        printf("Your age is under 18");
    }
}