// program to demonstrate increase salary only manager and clarks.

#include<stdio.h>
main()
{
    char job;
    int salary;
    printf("Enter salary only clarks and managers:");
    scanf("%c", &job);

    if(job=='m' || job=='c')
        printf("incresed salary\n");
    else
        printf("not increased\n");


    printf("Enter manager and clark salary if it is already is 10000:");
    scanf("%d", &salary);
    if(job=='m' && salary>=10000 || job=='c' && salary>=10000)
        printf("salary increased\n");
    else
        printf("salary is not increased");

}