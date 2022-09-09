// program to demonstrate calculate JEE student percentage, calculate student percentile and calculate rank.

#include<stdio.h>
#include<string.h>

main()
{
    int physics,mathmetics,chemistry;
    int registered=100000, appeared, less_then_per;
    float percentage, total_per, rank;

    // 1st - calculate student percentage
    printf("Please enter your subject marks\n");

    printf("Enter physics marks:\n");
    scanf("%d", &physics);
    printf("Enter your chemistry marks:\n");
    scanf("%d", &chemistry);
    printf("Enter your mathmetics marks:\n");
    scanf("%d", &mathmetics);

    percentage = (float)(physics+mathmetics+chemistry)/320*100;
    printf("Your percentage is:%f\n", percentage);

    // calculate percentile.
    printf("Find your percentile:\n");
    printf("Total registered student for JEE main exam:%d\n", registered);

    printf("Total appeared student in the JEE main exam:\n");
    scanf("%d", &appeared);

    printf("student less then percentage:");
    scanf("%d", &less_then_per);

    if(percentage<less_then_per)
        printf("Enter less then student percentage\n");

    total_per = (less_then_per)*100/appeared;
    printf("Your percentile is:%f\n",total_per);

    //calculate student rank.
    printf("Find your rank:\n");

    rank = (100-total_per)/100*registered;
    printf("Your rank is:%.2f\n", rank);

    // you are eligible for IIT Bombay or not mimimum rank to eligible is 3000.
    if(rank<=3000)
    {
        printf("Your are eligible for IIT Bombay\n");
        printf("Congratulation");
    }
    else
    {
        printf("You are not eligible for IIT Bombay\n");
        printf("Check your rank and try to another IITs,NITs,IIITs or other govt. college");
    }



    
}