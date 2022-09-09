// program to find which number is beggest in 3 numbers.
#include<stdio.h>
main()
{
    int x,y,z;
    printf("Enter different any 3 numbers:");
    scanf("%d%d%d", &x,&y,&z);

    if(x>y && x>z)
        printf("biggest num is:%d",x);
    else if(y>x && y>z)
        printf("biggest num is:%d", y);
    else if(z>x && z>y)
        printf("biggest num is:%d",z);

}