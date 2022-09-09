//menu driven programs - print transactions type.
#include<stdio.h>
main()
{
    int transaction;

    //menu of trasaction.
    printf("1-Withdraw\n");
    printf("2-Deposit\n");
    printf("3-Check balance\n");
    printf("4-Mini statements\n");

    printf("select your choise:");
    scanf("%d", &transaction);

    switch(transaction)
    {
        case 1:
            printf("Withdraw");
            break;
        case 2:
            printf("Deposit");
            break;
        case 3:
            printf("Check balance");
            break;
        case 4:
            printf("Mini statements");
            break;

        default:
            printf("other transaction");
    }
}