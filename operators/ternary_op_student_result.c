// program to check of student result in one subject using tenary operator.
#include<stdio.h>
main()
{
    int marks,total;
    printf("Enter subject marks:");
    scanf("%d", &marks);

    total = (marks>=40) ? printf("pass\n") : printf("fail\n");
    printf("your marks is:%d", total);

}