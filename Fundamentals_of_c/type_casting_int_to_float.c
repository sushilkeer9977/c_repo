// program find the average 4 numbers, read at run time and convert int to float.

#include<stdio.h>

main()
{
    int a,b,c;
    float avrg;

    printf("Enter to find avrg num:");
    scanf("%d %d %d", &a, &b, &c);

    avrg = (float)(a+b+c)/3;
    printf("average num is: %f", avrg);
}