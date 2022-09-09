// program to find result of 3 subjects.
#include<stdio.h>
int main()
{
    int sub_m1,sub_m2,sub_m3,total,avrg;
    printf("Enter 3 subject marks:");
    scanf("%d%d%d", &sub_m1, &sub_m2, &sub_m3);

    total=sub_m1+sub_m2+sub_m3;
    avrg=total/3;
    printf("%d\n%d\n", total,avrg);

    if(sub_m1<40 || sub_m2<40 || sub_m3<40) //if 1 condition is true fail statement will be execute if onc condtion should be true
        printf("Fail");
    else if(avrg>=60)
        printf("First divison");
    else if(avrg>=50)
        printf("Second divison");
    else
        printf("Third divison");

    
}