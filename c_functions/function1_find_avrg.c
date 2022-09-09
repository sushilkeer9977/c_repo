//Define a function to find average of 3 numbers:
#include<stdio.h>
float avrg(int,int,int);
float avrg(int x,int y,int z)
{
    return (float)(x+y+z)/3;
}
main()
{
    float k;
    k=avrg(45,56,78);
    printf("avrg is:%f\n", k);

    printf("avrg is:%f\n", avrg(80,80,70));

}