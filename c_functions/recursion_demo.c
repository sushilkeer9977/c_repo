//recursion demo
#include<stdio.h>

void rec_demo();
void rec_demo()
{
    static int i=1;
    i++;
    printf("hello\n");
    if(i<=10)
        rec_demo();  //recursive call
    
}
main()
{
    rec_demo();
}