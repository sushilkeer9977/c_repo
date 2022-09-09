//program to add 2 number but no argument and no return value.
#include<stdio.h>
void add(); //function declaration
void add() //function defination
{
    int x,y;     // if argument is not there we should read value at run time after then call it.
    printf("Enter x and y value:");
    scanf("%d%d", &x,&y);
    printf("sum:%d\n", x+y);
}
main()
{
    add();
    add();
}