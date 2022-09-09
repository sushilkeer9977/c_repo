//program to find average of 3 numbers.Read 3 numbers at run time.

#include<stdio.h>

main()
{
    int x,y,z;
    float avrg;

    printf("Enter for find avrg num");
    scanf("%d %d %d", &x, &y, &z);

    avrg=(x+y+z)/3; // int/int = int value -> we always get integer value
    printf("average num is: %f", avrg);
}