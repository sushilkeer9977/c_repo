//Define a structure with 3 members: sid, sname, avrg Initialize it & print it:
#include<stdio.h>
struct student  // define plane
{   
    int stuid;  //instance variable/members/fielsds/properties
    char sname[10];
    float avrg;
};
main()
{
    struct student s1 = {1234, "sushil", 45.6}; // initilization data for object. 

    printf("%d\t%s\t%.1f", s1.stuid,s1.sname,s1.avrg); // print the data.
}