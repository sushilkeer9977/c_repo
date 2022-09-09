// program to demonstrate check age.
#include<stdio.h>
main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Your are adult");
    }
    else
    {
        printf("your are not adult");
    }
}