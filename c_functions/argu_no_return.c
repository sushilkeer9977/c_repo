//program to add 2 number but argument and no return value.
#include<stdio.h>

void add(int,int);  //function declaration
void add(int x,int y) // function defination 
{
    printf("sum:%d\n", x+y);
}
main()
{
    add(2,4);   //function calling
    add(6,7);
}