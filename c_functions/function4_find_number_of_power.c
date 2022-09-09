//Define a function to find power value:
#include<stdio.h>
int power(int,int);

int power(int n,int p)
{
    int r,i;
    r=1;
    for(i=1;i<=p;i++)
        r=r*n;
        return r;
}

main()
{
    int k;
    k=power(2,3);
    printf("2 power 3 is:%d", k);
}