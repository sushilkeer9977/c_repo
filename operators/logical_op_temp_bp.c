// program to demonstrate to check fever tempreture and blood pressure.

#include<stdio.h>

main()
{
    int fever_temp, max_bp, min_bp;


    printf("Enter fever_temp and bp value is high or not:");
    scanf("%d%d%d", &fever_temp, &max_bp, &min_bp);

    if(fever_temp<=98 && max_bp==149 && min_bp==90)
    {
        printf("your tempreture and bp is normal\n");
        printf("no need to treatment");
    }
    else
    {
        printf("your tempreture and bp is not normal\n");
        printf("you need to treatment");
    }
}