//define for loop in function - print 1 to 4;
#include<stdio.h>
void count(); //function declaration

void count()
{
    int i; //local variable
    for(i=1;i<=4;i++)
    {
        printf("%d\n", i);
    }
}
main()
{
    count();
}