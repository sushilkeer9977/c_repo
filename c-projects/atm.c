// ATM transection process.

#include<stdio.h>
#include<string.h>
main()
{
    char blink;
    int option1, pin, withdrow;
    char first_lang[20]="English";
    printf("*   ################################   *\n\n");
    printf("\t ~ Welcome to ATM ~\n\n");
    printf("*   ################################   *\n\n");

    //card insertion process
    printf("==> Please insert your card:\n\n-->\t|___|\t<--:");
    scanf("%c", &blink);
    if(blink=='b')
    {
        printf("It is blinking.\n");
        printf("Please insert your card.\n\n");
    }
    else
    {
        printf("It is not blinking.\n");
        printf("Please wait for blinking\n\n.");
    }

    //select the language.
    printf("==> Select the language:\n\n");
    printf("choose the option:\n");
    printf("->:English\n");
    printf("->:Hindi\n");
    scanf("%d", &option1);
    printf("%s\n", first_lang);

    //pin number process.
    printf("==>Please enter your 4 digit number:\n");
    scanf("%d", &pin);
    if(pin<=4 || pin>=0)
        printf("==>Please choose your transaction");
    else
        printf("your pin is not correct\n\n");

    //Transaction process.
    
    






    

}

