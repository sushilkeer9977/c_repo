// program to find result of a student for one subject use not operator.

#include<stdio.h>

main()
{
    int marks;
    printf("Enter student marks:");
    scanf("%d", &marks);

    if(!(marks>=40))
        printf("your are pass");
    else
        printf("you are fail");
}