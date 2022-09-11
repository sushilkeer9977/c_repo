// program to demonstrate extern storage class.

#include<stdio.h>

int x=20;
void f1();
void f2();

void f1()
{
    printf("f1:%d\n",x);
}
void f2()
{
    printf("f2:%d\n",x);
}
main()
{
    f1();
    f2();
    printf("main:%d",x);
}