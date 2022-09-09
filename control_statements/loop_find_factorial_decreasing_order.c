//program to whether the given find facrorial number using for loop.
#include<stdio.h>
main()
{
    int n,f,i;
    printf("Enter n:");
    scanf("%d", &n);

    f=1;
    for(i=n;i>=1;i--)
        {
            f=f*i;
        }

        printf("%d!=%d",n,f);
}