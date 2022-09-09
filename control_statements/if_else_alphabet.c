//program to check given character is alphabet or not using if else.
#include<stdio.h>
main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("given character is alphabet\n");
        printf("character is:%c", ch);
    }
    else
    {
        printf("given character is not aplhabet\n");
        printf("character is:%c", ch);
    }
}