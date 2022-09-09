//program to find factorial given number.
#include<stdio.h>
main()
{
    int n,i,f;
    printf("Enter number:");
    scanf("%d", &n);

    f=1;
    i=1;

    while(i<=n)
    {
        f=f*i;
        i++;
    }

    printf("%d!=%d",n,f);
}