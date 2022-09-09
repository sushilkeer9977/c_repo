// program to demonstrate you are eligible for army exam or not.

#include<stdio.h>

main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age>=18 && age<=25)
    {
        printf("You are eligible for army exam \n");
        printf("your minimum age must be 18");
    }
    else
    {
        printf("You are not eligible for army exam \n");
        printf("Your age must be between 18 and 25");
    }
}