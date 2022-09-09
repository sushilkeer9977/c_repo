// program to multiply 2 numbers. Read 2 numbers at run time.

#include<stdio.h>

main()
{
     int x, y, z;

    // printf("Enter your first number:");
    // scanf("%d", &x);

    // printf("Enter your second number:");
    // scanf("%d", &y);

    // z=x*y;
    // printf("product is: %d", z);


    //we can cunsise the code.

    printf("Enter 2 number:");
    
    scanf("%d %d", &x, &y);

    z = x*y;
    printf("product is:%d", z);
    
     
}