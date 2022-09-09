//program to find quadratic equation.
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,k;
    printf("Enter a, b, c value:");
    scanf("%d%d%d", &a,&b,&c);

    k = b*b-4*a*c;

    if(k>0)
    {
        printf("root-1:%lf\n", (-b+sqrt(k))/(2*a));
        printf("root-2:%lf\n", (-b-sqrt(k))/(2*a));
    }
    else if(k==0)
    {
        printf("root:%lf\n", (double)-b/(2*a));
    }
    else if(k<0)
    {
        printf("root-1:%lf+i%lf\n",(double)-b/2*a+sqrt(-k)/(2*a));
        printf("root-2:%lf-i%lf",(double)-b/2*a-sqrt(-k)/(2*a));
    }
}