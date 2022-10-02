//Passing Structure as Argument:
#include<stdio.h>
typedef struct employee // define our own plane (getting employee data)
{
    char ename[10]; // instance variable
    int eno;
    double sal;
    char role[20];
} emp;

void employee_data(emp);
void employee_data(emp d) // passing struct as argument
{
    printf("%s\t%d\t%lf\t%s\n", d.ename, d.eno, d.sal, d.role);
}
main()
{
    emp e1 = {"sushil", 1234, 50000, "software_engineer"}, e2 = {"kundan", 4567, 60000, "software_engineer"};
    employee_data(e1); // passing object for d(argument).
    employee_data(e2);

}
