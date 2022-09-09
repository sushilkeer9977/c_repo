//C program to check whether a character is an alphabet or not.

#include<stdio.h>

main()
{
    char alpha;

    printf("Enter any char:");
    scanf("%c", &alpha);

    if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
    {
        printf("It is a alphabet");
    }
    else
    {
        printf("It is a not alphabet");
    }
}