//compare to values using equals to operator.

#include<stdio.h>

main()
{
    int age;
    printf("enter your age is:");
    scanf("%d", &age);

    if(age==22)
    {
        printf("age is correct \n");
        printf("you are eligible for elcection");
    }
    else
    {
        printf("age is not correct \n");
        printf("you are not eligible for election");
    }


}