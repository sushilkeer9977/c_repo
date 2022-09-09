//program to demonstrate student grade.
#include<stdio.h>
int main()
{
    int marks;

    printf("Please enter marks:");
    scanf("%d", &marks);

    if(marks>=33 && marks<=60)
    {
        printf("Your grade is c\n");
        printf("marks is:%d", marks);
    }
    else if(marks>=61 && marks<=75)
    {
        printf("Your grade is B\n");
        printf("marks is:%d", marks);
    }
    else if(marks>=76 && marks<=100)
    {
        printf("Your grade is A\n");
        printf("marks is:%d\n", marks);
    }
    else
    {
        printf("you are fail non of any grade");
    }

    return 0;
}