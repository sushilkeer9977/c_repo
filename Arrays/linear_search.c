//Program for searching an element in the array using Linear Search:
#include<stdio.h>
main()
{
    int x[10],n,i,se,found;

    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter x-array elements:");
    for(i=0;i<n;i++)
        scanf("%d", &x[i]);

    printf("Enter searching element:");
    scanf("%d", &se);

    found=0;
    for(i=0;i<n;i++)
    {
        if(se==x[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
        printf("Element is found");
    else
        printf("Element is not found");
}