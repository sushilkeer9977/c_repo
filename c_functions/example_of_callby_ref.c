//example of call by reference.
#include<stdio.h>
int strlenght(char*);
int strlenght(char *s)
{
    int count;
    for(count=0;s[count]!='\0';count++);

    return count;
}
main()
{
    char x[10]; // x=> string are hold address of itself
    
    int k;

    printf("Enter a string:");
    scanf("%s", x);

    k=strlenght(x); //x is address
    printf("string lenght is:%d", k);
}