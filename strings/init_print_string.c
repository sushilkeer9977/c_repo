//Program to demonstrate initializing & printing string:
#include<stdio.h>
main()
{
    //char x[20]; // declaring string.
    char x[20] = "sushil"; // initilization string

    printf("%s\n", x);

    printf("%c", x[0]); // 's'
    printf("%c", x[3]); // 'h'
    printf("\n");

    //but string is a char array so that we are using for loop

    for(int i=0;x[i]!='\0';i++)
        printf("%c", x[i]);



}