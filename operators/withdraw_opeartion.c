// program to demonstrate to withdraw opertion.

#include<stdio.h>
//#include<string.h>

main()
{
    
    char lang[20];
    int  pin;
    float amount;

    printf("### ~ Welcome to ATM ~ ### \n");

    // choose a language
    printf("### ~ please choose a language ~ ### :");
    scanf("%s", lang);

    //Enter pin number
    printf("### ~ please enter 4 digit number ~ ### :");
    scanf("%d", &pin);

    printf("Language is:%s\n Pin is:%d\n", lang,pin);

    //please enter amount.
    printf("### ~ Please enter amount ~ ### :");
    scanf("%f", &amount);

    if(amount<=5000.00)
    {
        printf("Your balance sufficient \n");
        printf("Your withdraw operation is done");
    }
    else
    {
        printf("Your balance insufficient \n");
        printf("Please check your balance");
    }

    printf("\n *** Thanks ***");

}