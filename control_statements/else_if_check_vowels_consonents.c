// program to check given character is vowels or consonants using else if.
#include<stdio.h>
main()
{
    char aplha;
    printf("Enter any character:");
    scanf("%c", &aplha);

    if(aplha=='a' || aplha=='e' || aplha=='i' || aplha=='o' || aplha=='u')
    {
        printf("character is vowels\n");
        printf("char is:%c", aplha);
    }
    else if(aplha>='a' && aplha<='z')
    {
        printf("character is consonants\n");
        printf("char is:%c", aplha);
    }
}