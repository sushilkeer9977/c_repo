//program to print value and pointers (in case of pointer).
#include<stdio.h>
main()
{
    int x=30, *p;

    p=&x;

    //data in memory location can be accessed using 2 ways.
        //1 - using name 
        //2 - using address

    printf("x value is:%d\n", x); // using name
    printf("address of x:%d\n", &x);
    printf("front of address pointer:%d\n", *&x); //using address.  
    printf("pointer address:%d\n", p);
    printf("pointer symbol in pointer:%d", *p);
}