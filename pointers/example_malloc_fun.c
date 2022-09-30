//program to demonstrate malloc() function.
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p;

    p=(int*)malloc(40); //dynamic memory allocation.

    *p = 30; //storing the data in heap memory.

    printf("data is:%d", *p); //accessing the heap memory data.

    free(p); //destroye the memory.
}