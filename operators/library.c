// This mini project for develop Library management system.

#include<stdio.h>
#include<string.h>
#include<float.h>

main()
{
    char A;
    char pyname[50],py[100],auther[100];
    int x;

    printf("##### ~:Welcome to library, please keep the peace in Library:~ ##### \n");
    printf("--> Enter section <-- :");

     // print edition of python books.

    scanf("%c", &A);
    printf("*** Book name is *** \n");
    strcpy(pyname, "Python");
    printf("%s\n", pyname);
    gets(py);
    printf("--> List of python book's edition <-- \n");
    puts("1:-Python crash course, 2nd edition \n");
    puts("2:-Learnig python edition, 5th edition \n");
    puts("3:-Automate the Boring Stuff with Python, 2nd Edition \n");
    puts("4:-Python for Everybody: Exploring Data in Python 3 \n");
    puts("4:-Python (2nd Edition): Learn Python in One Day and Learn It Well \n");


    // print books auther names.
    strcpy(auther, "Auther's");
    printf("%s", auther);
    gets(auther);
    puts("eric matthes \n");
    puts("Mark Lutz \n");
    puts("Al Sweigart \n");
    puts("Charles Severance \n");
    puts("LCF Publishing, Jamie Chan \n");
    






}