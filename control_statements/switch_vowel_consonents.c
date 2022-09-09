//Program to check whether the given alphabet is vowel or consonant:
#include<stdio.h>
#include<ctype.h>
main()
{
    char alpha;
    printf("Enter a character for check vowel or consonants:");
    scanf("%c", &alpha);

    alpha=tolower(alpha);
    
    switch(alpha)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowels");
            break;
        default:
            printf("consonants");
    }
}