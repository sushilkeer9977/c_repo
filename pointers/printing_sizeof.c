//printing size of pointer variable.
#include<stdio.h>
main()
{
    int x=50, *p1;
    double y=78.4, *p2;
    char z = 'A', *p3;

    p1=&x;
    p2=&y;
    p3=&z;

    //print using values of variable
    printf("%d\t%f\t%c\n",x,y,z);

    //print using pointer address values
    printf("%d\t%f\t%c\n\n", *p1,*p2,*p3); 

    //size of variables
    printf("%d\t%d\t%d\n\n", sizeof(x),sizeof(y),sizeof(z));

    //size of pointer variables.
    printf("%d\t%d\t%d", sizeof(p1),sizeof(p2),sizeof(p3));
}