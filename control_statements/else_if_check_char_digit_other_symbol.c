// program to check whether the given character is alphabet or digit or special character using else if.
#include<stdio.h>
main()
{
    char ch;
    printf("Enter a any character or digit:");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z' || (ch>='A' && ch<='Z'))
    {
        printf("given character is alphabet\n");
        printf("alpha is:%c", ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("given value is digit\n");
    }
    else
    {
        printf("special symbol");
    }
}