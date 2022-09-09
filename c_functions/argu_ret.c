//program to add 2 number but argument and  return value.
#include<stdio.h>
int add(int,int);
int add(int x,int y)
{
    return x+y;
}
main()
{
    int k;
    k=add(4,6);
    printf("sum:%d", k);
}