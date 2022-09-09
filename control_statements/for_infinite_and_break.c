//program to demonstrate infinite loop and how stop infinite loop using break in for loop.
#include<stdio.h>
main()
{
    int i;

    i=1;

    for(;;)
        {
        printf("%d\n",i);
        if(i==5)
            break;
        i++;
        }

}