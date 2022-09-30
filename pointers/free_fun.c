//program to demonstrate free function.
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p;

    p=(int*)malloc(50);

    *p = 80;

    printf("%d",*p);

    free(p); // destroye the memory.
}