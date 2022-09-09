/*Program to find result of a student in 3 subjects. Max marks are 100
for each subject. Minimum 40 marks are required in each subject
for pass:*/

#include<stdio.h>

main()
{
    int sub1,sub2,sub3;
    printf("Please enter subjects marks:");
    scanf("%d%d%d", &sub1,&sub2,&sub3);

    if(sub1>=40 && sub2>=40 && sub3>=40) //minimum marks are required 40
    {
        printf("you are pas\n");
        printf("don't need to give supplementry exam");
    }
    else
    {
        printf("you are fail \n");
        printf("you need to give supplementry exam");
    }
}

