//Accessing 1D-arrays using pointers.
#include<stdio.h>
main()
{
    int x[] = {10,20,30,40,50},*p,i;

    p=&x[0];

    for(i=0;i<5;i++)
        printf("%d\n", *p++);
}