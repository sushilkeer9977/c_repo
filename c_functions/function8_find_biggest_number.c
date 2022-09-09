//Define functions to find max and min value in 2 numbers.
#include<stdio.h>

int max(int,int);
int min(int,int);

int max(int x,int y)
{
    return x>y?x:y;
}
int min(int x, int y)
{
    return x<y?x:y;
}
main()
{
    int m,mi;
    m=max(20,10);
    printf("max value is:%d\n", m);

    mi=min(23,56);
    printf("min value is:%d", mi);
}