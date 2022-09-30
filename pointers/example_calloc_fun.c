//example on calloc() function.
#include<stdio.h>
#include<stdlib.h>
main()
{
    int x[5], *p,i;

    p = (int*)(calloc(5,10)); // each 5 blocks, 10 byte memory will be allocated.

    printf("Enter block elements:");

    for(i=0; i<5; i++) // read block elements
        scanf("%d", (p+i));

    for(i=0; i<5; i++)
        printf("%d\n", *(p+i)); // print block elements

    free(p);
}