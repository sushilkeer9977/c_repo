//program to print given n(numbers) reverse number.
#include<stdio.h>
main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);

    i=10;
    while(i>=n)
    {
        printf("%d\n",i);
        i--;
    }
}