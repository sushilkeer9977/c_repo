// program to demonstrate check bank balance sufficient or insufficient.

#include<stdio.h>

main()
{
    int amount;
    printf("Please enter the amount:");
    scanf("%d", &amount);

    if(amount<=30000  || amount<30000)
    {
        printf("your balance is sufficient:\n");
        printf("Thanks for using service");
    }
    else
    {
        printf("your balance is insufficient\n");
        printf("please put some money in your account");
    }
}