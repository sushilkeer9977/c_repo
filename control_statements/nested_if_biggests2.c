//program to find biggest 3 number .
#include<stdio.h>
main()
{
    int x,y,z;
    printf("Enter 3 different:");
    scanf("%d%d%d", &x,&y,&z);

    if(x>y)
    {
        if(x>z)
            printf("%d", x);
    }
    if(y>x)
    {
        if(y>z)
            printf("%d", y);
    }
    if(z>x)
    {
        if(z>y)
            printf("%d", z);
    }
}