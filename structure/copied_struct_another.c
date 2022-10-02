// Copying one structure to another:
#include<stdio.h>

typedef struct date
{
    int d;
    int m;
    int y;
}date;
main()
{
    struct date d1, d2;

    printf("Enter date:");
    scanf("%d%d%d", &d1.d, &d1.m, &d1.y);

    d2 = d1;

    printf("%d\t%d\t%d\n", d1.d, d1.m, d1.y);
    printf("%d\t%d\t%d\n", d2.d, d2.m, d2.y);
}
