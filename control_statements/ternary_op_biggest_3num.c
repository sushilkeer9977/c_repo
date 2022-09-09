//Find biggest in 3 different numbers using Ternary operator [Conditional operator]:
#include<stdio.h>
main()
{
    int x,y,z,big;
    printf("enter 3 different numbers:");
    scanf("%d%d%d", &x,&y,&z);

   big = x>y?(x>z ? x:y):(y>z ? y:z);
   printf("biggest num is:%d", big);
}