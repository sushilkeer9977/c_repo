// program to demonstrate  gender male and female.

#include<stdio.h>

main()
{
    char gender;
    printf("Enter gender is male or female:");
    scanf("%c", &gender);

    if(gender=='m' || gender=='f')
        printf("your gender is:%c", gender);   
    else 
        printf("invalid");
}