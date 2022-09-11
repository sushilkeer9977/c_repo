//Define a Function to print multiplication table:
#include<stdio.h>
void multitable(int);
void multitable(int n)
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
    printf("\n");
}
main()
{
    multitable(2);
    //multitable(5);
}