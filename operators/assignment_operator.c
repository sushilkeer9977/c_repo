// program to demonstrate assignment operator.

#include<stdio.h>
main()
{
    int x=5;

    x+=10;
    printf("%d\n", x);

    x-=12;
    printf("%d\n", x);

    x*=5;
    printf("%d\n", x);

    x/=6;
    printf("%d\n", x);

    x%=4;
    printf("%d", x);
}