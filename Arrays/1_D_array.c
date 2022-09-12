//Example program to demonstrate initializing 1D-Array & printing all elements:
#include<stdio.h>
main()
{
    int x[6] = {10,20,30,40,50,60},i; //1-D array initilize.

    x[2] = 31; // assigning value in index 2.

    for(i=0;i<6;i++)
        printf("1-D arrays elements:%d\n", x[i]);
}