//Define a structure with 3 members: ename, eno., esal read 1 employee record & print it:
#include<stdio.h>
struct employee
{
    char ename[10];
    int eno;
    double esal;
};
main()
{
    struct employee e1;

    printf("Enter emplyee details:");
    scanf("%s%d%lf", e1.ename, &e1.eno, &e1.esal);

    printf("%s\t%d\t%.2lf", e1.ename, e1.eno, e1.esal);
}