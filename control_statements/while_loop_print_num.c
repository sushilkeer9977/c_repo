//program to print first n numbers using while loop.
#include<stdio.h>
main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d", &n);

    i=1; //initialiation/starting value
    while (i<=n) //condition/how many times loops has be executed/ending value
    {
        printf("%d\n",i);
        i++; //step/increament 
    }
    
}