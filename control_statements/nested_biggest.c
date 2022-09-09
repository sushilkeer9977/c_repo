//program to find biggest in three different number using nested if.
#include<stdio.h>
main()
{
    int x,y,z;
    printf("Enter 3 different number:");
    scanf("%d%d%d", &x,&y,&z);

    if(x>y)
    {
        if(x>z){
            printf("biggest num is:%d", x);
        }
    }
    else if(y>x)
    {
        if (y>z)
        {
        printf("biggest num is:%d", y);
        }
    }                                   
    else 
    {
    printf("biggest num is:%d", z);
    }
}