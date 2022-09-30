//Example on call by value.
#include<stdio.h>
void swap(int,int);
void swap(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
main()
{
    int a=20, b=30;

    swap(a,b); // call by value
    printf("a = %d\t b=%d", a,b);
}