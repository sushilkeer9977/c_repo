//Program to print student details like section, marks and average marks by reading them from keyboard.

#include<stdio.h>

main()
{
    char section;
    int marks;
    float avrg;

    printf("Enter student details:");
    scanf("%c %d %f", &section, &marks, &avrg);

    printf("student section is:%c \n student marks is:%d \n student avrg is:%f", section, marks, avrg);

}