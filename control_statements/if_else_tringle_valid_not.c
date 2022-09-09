// write program to check whether a tringle is valid or not if angles are given using if else.
#include<stdio.h>
main()
{
    int angle_1,angle_2,angle_3,sum;
    printf("Enter angle value for chack tringle is valid or not:");
    scanf("%d%d%d", &angle_1,&angle_2,&angle_3);

    sum=angle_1+angle_2+angle_3;

    if(sum==180 && angle_1>0 && angle_2>0 && angle_3>0)
    {
        printf("tringle is valid\n");
        printf("angle_1 is:%d\n angle_2 is:%d\n angle_3 is:%d", angle_1, angle_2, angle_3);
    }
    else
    {
        printf("tringle is not valid");
    }
}