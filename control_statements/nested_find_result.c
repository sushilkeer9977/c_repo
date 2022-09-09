// program to find result of student in 3 subject using nested if.
#include<stdio.h>
int main()
{
    int sub1_m,sub2_m,sub3_m,total,avrg;
    printf("Enter 3 subject marks:");
    scanf("%d%d%d", &sub1_m,&sub2_m,&sub3_m);

    if(sub1_m>=40 && sub2_m>=40 && sub3_m>=40)
    {
        total=sub1_m+sub2_m+sub3_m;
        avrg=total/3;
        printf("total marks:%d\n avrg is:%d\n",total,avrg);
        {
        if(avrg>=60)
            printf("First divison");
        else if(avrg>=50)
            printf("Second divison");
        else if(avrg>=40)
            printf("Third divison");
    else
        printf("You are fail");
        }
    }
    return 0;
}