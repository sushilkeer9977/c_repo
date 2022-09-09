//Define a function to find factorial value:
#include<stdio.h>
int factorial(int);
int factorial(int n)
{
    int f,i;
    f=1;
    for(i=1;i<=n;i++)
        f=f*i;
        return f;
}
main()
{
    int k;
    k=factorial(4);
    printf("4 fact is:%d\n", k);
    printf("7 fact is:%d", factorial(7));    // call function with the help printing statement.
}

