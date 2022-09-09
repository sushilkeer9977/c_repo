#include<stdio.h>
#include<string.h>

main()
{
    char name[10];
    char lastname[10];
    char gmail[10];
    char address[10];
    int mobail;
    float salary;
    char section;

    strcpy(name, "");
    printf("Employee name:");
    scanf("%s", name);
    printf("name is: %s \n", name);

    strcpy(lastname, "");
    printf("Employee last name:");
    scanf("%s", lastname);
    printf("Lastname is:%s \n", lastname);

    strcpy(gmail, "");
    printf("Employee gmail:");
    scanf("%s", gmail);
    printf("Gmail is: %s \n", gmail);

    strcpy(address, "");
    printf("Employee address:");
    scanf("%s", address);
    printf("Address is:%s \n", address);

    printf("Employee mobail number:");
    scanf("%d", &mobail);
    printf("Number is:%d \n", mobail);

    printf("Employee salary:");
    scanf("%f", &salary);
    printf("Salary is:%f \n", salary);

    printf("Employee section:");
    scanf(" %c", &section);
    printf("Section is:%c", section);

    printf("Employee details is: \n  Name: %s \n Lastname:%s \n Gmail: %s \n Address: %s \n Mobail number: %d \n salary: %f \n Section: %c", name, lastname, gmail, address, mobail, salary, section);

}