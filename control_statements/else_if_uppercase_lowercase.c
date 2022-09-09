//program to whether the given character is uppercase or lowercase using if else.
#include<stdio.h>
main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("given character is uppercase\n");
        printf("alphabet is:%c", ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("given character is lowercase\n");
        printf("alphabet is:%c", ch);
    }
    else
    {
        printf("none of character");
    }
    
}