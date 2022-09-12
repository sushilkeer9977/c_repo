//define function using for loop - print factors and print number of factors.
#include<stdio.h>

void number_factor(int);
void number_factor(int n)
{
    int i,count;
    count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("number of factors are:%d",count);
}
main()
{
    number_factor(5);
}