//Reading Single Dimensional Array:
#include<stdio.h>

main()
{
    int x[10],i,n;

    printf("how many element you want:");
    scanf("%d", &n);
    printf("read elements are %d:", n);

    for(i=0;i<n;i++)
        scanf("%d", &x[i]);

    for(i=0;i<n;i++)
        printf("Elements are:%d\n", x[i]);

}