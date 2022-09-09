//Program to print student details:
#include<stdio.h>
void studentdata(char,int,float);
void studentdata(char s, int m, float avrgm)
{
    printf("student section:%c\n", s);
    printf("stdent marks is:%d\n", m);
    printf("student avrg marks is:%f\n", avrgm);
}
main()
{
    studentdata('A',56,67.8);
}