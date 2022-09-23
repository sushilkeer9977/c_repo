//Program to concatenate 2 strings without function.
#include<stdio.h>
#include<string.h>
main()
{
    char x[10],y[10],z[20];
    int i,n;

    printf("Enter strings:"); //read x and y arrays string
    scanf("%s%s", x,y);

    n=strlen(x); //for gatting x-string lenth of the string.

    for(i=0;x[i]!='\0';i++) //copied x-string into z
        z[i] = x[i];

    for(i=0;y[i]!='\0';i++) //copied y-string into z
        z[n+i] = y[i];

    z[n+i] = '\0'; //passing '\0' to end of the z-string 

    printf("z = %s",z);
}