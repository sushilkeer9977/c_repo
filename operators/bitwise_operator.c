// program to demonstrate bitwise operators.
#include<stdio.h>
main()
{
    short int x=12,y=13,a,o,xo,ls,lr,no;

    a=x&y;
    o=x|y;
    xo=x^y;
    ls=x<<2;
    lr=x>>2;
    no=~x;

    printf("AND bitwise value is:%d\n",a);
    printf("OR bitwise value is:%d\n", o);
    printf("XOR bitwise value is:%d\n",xo);
    printf("Left shift value is:%d\n",ls);
    printf("Right shift value is:%d\n",lr);
    printf("Not operator x value is:%d",no);
}