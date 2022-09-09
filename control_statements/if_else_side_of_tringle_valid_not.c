// program to check whether a tringle is valid or not if angle are given using if else.
#include<stdio.h>
main()
{
    int side_1,side_2,side_3;
    printf("Enter side of angles:");
    scanf("%d%d%d", &side_1,&side_2,&side_3);

    if(side_1+side_2>side_3 && side_1+side_3>side_2 && side_2+side_3>side_2)
        printf("tringle is valid");
    else
        printf("tringle is not valid");
}