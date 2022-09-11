//program to demonstrate auto storage class.
#include<stdio.h>

void f1(); //function declaration
void f2();

void f1()   //function define
{
    int x=30;   //auto(local) variable
    printf("%d\n", x);
}
void f2()
{
    int x=40;
    printf("%d", x);
}
int main()
{
    f1();
    f2();
}