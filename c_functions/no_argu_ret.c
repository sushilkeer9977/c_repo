//program to add 2 number but no argument and return value.
#include<stdio.h>

int add(); //function declaration
int add()  //function defination
{
    int x,y;
    printf("Enter x and y value:");
    scanf("%d%d", &x,&y);

    return x+y;
}
main()
{
    int k;
    k=add();  //function calling 
    printf("sum:%d\n", k);
    printf("sum:%d", add());  // we can also called function with printf 
}