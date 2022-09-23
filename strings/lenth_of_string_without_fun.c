//Program to find string length without using strlen() function:
#include<stdio.h>
#include<string.h>
main()
{
    char x[10];
    int count;

    printf("Enter any string:");
    scanf("%s", x);

    count=0;
    while(x[count]!='\0')
    {
        count++;
    }
    printf("len of the string is:%d", count);

}