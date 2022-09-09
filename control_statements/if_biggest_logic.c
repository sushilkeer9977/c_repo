//Finding biggest in 3 diff numbers using some more extra logic.
#include<stdio.h>
main()
{
    int x,y,z,big;
    printf("enter 3 different number:");
    scanf("%d%d%d",&x,&y,&z);

    big=x;
    if(y>big)
        big=y;

    if(z>big)
        big=z;
printf("biggest num is:%d", big);
        
        
}