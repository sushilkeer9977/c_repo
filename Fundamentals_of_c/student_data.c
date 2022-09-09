// program to demonstrate student data(information)

#include<stdio.h>
#include<string.h>

main()
{
    char name[10];
    char section='A';
    int marks=200;
    float prstg=67.7;

    strcpy(name,"sushil");
    printf("name is:%s \n section is:%c \n marks is:%d \n persentage is:%.1f", name, section, marks, prstg);
}