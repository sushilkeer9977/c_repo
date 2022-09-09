//program to find factorial number given number using for loop
#include<stdio.h>
main()
{
    int n,f,i;
    printf("Enter n:");
    scanf("%d", &n);

    f=1;
    for(i=1;i<=n;i++)
        {
            f=f*i;
        }

        printf("%d!=%d\n",n,f);
}