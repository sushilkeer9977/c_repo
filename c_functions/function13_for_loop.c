//define function in for loop - print multiplication.
#include<stdio.h>

void multitable();

void multitable()
{
    int i,n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
}
int main()
{
    multitable();
}