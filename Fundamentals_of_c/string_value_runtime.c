// program read string at run time.

#include<stdio.h>

main()
{
    char name[20]; // declearing string name

    printf("Enter your name:");
    scanf("%s", name);
    printf("my name is: %s", name);
}