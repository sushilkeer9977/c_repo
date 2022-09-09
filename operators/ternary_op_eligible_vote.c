// program to check whether the person is eligible to vote or not.

#include<stdio.h>
main()
{
    int age;
    printf("Enter person age is eligible for vote or not:");
    scanf("%d", &age);

    (age>=18 && age<=25) ? printf("eligible\n") : printf("not eligible\n");
    
}