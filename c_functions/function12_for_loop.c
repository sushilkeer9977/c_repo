//program define for loop in function - print odd number.
#include<stdio.h>

void even(); //function declaration

void even() // function define
{
    int i,n; //local variable
    printf("Enter n:");
    scanf("%d", &n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n", i);
    }
}
main()
{
    even();
}