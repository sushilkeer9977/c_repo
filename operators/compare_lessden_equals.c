#include<stdio.h>

main()
{
    int brother_age;

    printf("Enter the age:");
    scanf("%d", &brother_age);

    if(brother_age<=15)
    {
        printf("brother age is small\n");
        printf("name is shyam");
    }
    else
    {
        printf("brother age is big\n");
        printf("name is ram");
    }
}