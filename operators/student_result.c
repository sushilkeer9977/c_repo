//Program to find result of a student in one subject. Max marks are 100. Student must get minimum 40 marks for pass.

#include<stdio.h>

main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);

    if(marks>=50)
    {
        printf("student pass \n");
        printf("your marks is 50 above or equal 50");
    }
    else
    {
        printf("student fail \n");
        printf("your marks is under 50");
    }
}