//Define the functions to find square, cube & power 8 value.
#include<stdio.h>
#include<math.h>
int square(int);
int cube(int);
double power(int);

int square(int n)
{
    return n*n;
}
int cube(int n)
{
    return n*n*n;
}
double power(int n)
{
    return pow(n,8);
}
main()
{
    /* int s,c;
    double p;
    s = square(2);
    printf("square value is:%d\n",s);
    c = cube(3);
    printf("cube value is:%d\n", c);
    p = power(2);
    printf("power value is:%lf", p); */
    printf("2 square is:%d\n",square(2));
    printf("2 cube is:%d\n", cube(2));
    printf("2 power is:%lf",power(2));
}
