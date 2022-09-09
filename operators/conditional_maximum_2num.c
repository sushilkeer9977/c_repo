//Write a C program to find maximum between two numbers using conditional operator.

#include<stdio.h>
#include<string.h>
main()
{
    int x,y;
    char max_value[50];
    printf("Enter value to find maximum num:");
    scanf("%d %d", &x,&y);

    if(x>y)
    {
        printf("x value is greater then to y\n");
        printf("%d\n", x);
        strcpy(max_value, "max");
    }
    else
    {
        printf("x value is not greater then to y\n");
        printf("%d\n", y);
        strcpy(max_value, "not_max");
    }

    printf("%s", max_value);
}