//program to demonstrate realloc function.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char *s;

    s = (char*)malloc(10);

    strcpy(s, "hello\n");

    printf("%s", s);

    realloc(s,100);

    strcpy(s, "hy this concept in pointer");

    printf("%s", s);

    free(s);
}