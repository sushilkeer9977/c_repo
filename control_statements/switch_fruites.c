//Display Fruits menu. Ask the user to select his favorite fruit. Display user's choice on screen:
#include<stdio.h>
main()
{
    int fruit;

    printf("1-Apple\n");
    printf("2-Mango\n");
    printf("3-Graps\n");
    printf("select your fruit [1-3]:");
    scanf("%d", &fruit);

    switch(fruit)
    {
        case 1:
            printf("Apple");
            break;
        case 2:
            printf("Mango");
            break;
        case 3:
            printf("Grapse");
            break;

        default:
            printf("invalid");
    }
}