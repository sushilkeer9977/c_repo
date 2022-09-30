//example on call by reference .
#include<stdio.h>

void swap(int*,int*);
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
main()
{
    int a=20, b=30;

    swap(&a,&b); //call by reference.

    printf("a = %d\tb = %d", a,b);
}