// program to demonstrate chrck person adult, teenager, childe.
#include<stdio.h>
int main()
{
    int age;
    printf("Please enter your age:");
    scanf("%d", &age);

    if(age>=18 && age<=80)
    {
        printf("you are adult\n");
        printf("you are eligible for vote\n");
        printf("you are eligible for driving licence");
    }
    else if(age>=12 && age<=17)
    {
        printf("you are teenager\n");
        printf("you are not eligible for vote\n");
        printf("you are not eligible for lincence");
    }
    else
    {
        printf("you are childe");
    }

    return 0;
}