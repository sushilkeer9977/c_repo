//program to find number of digit given number.
#include<stdio.h>
main()
{
    int n,count;
    printf("Enter number:");
    scanf("%d", &n);

    count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }

    printf("Number of digit is:%d",count);
}