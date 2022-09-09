//program to input from the user and print minimum number of notes (Rs 500,100,50,40,30,20,10,5,2,1) required for the amounts.
#include<stdio.h>
main()
{
    int amount,note_500,amt,note_200,note_100,note_50,note_20,note_10,note_5,note_2,note_1;
    printf("Enter a amount:");
    scanf("%d", &amount);

    if(amount>500)
    {
        note_500 = amount/500;
        amt=amount-(note_500*500);
        printf("Total number of notes:%d\t amt is:%d", note_500, amt);
    }
    else if(amount>200)
    {
        note_200=amount/200;
        amt=amount-(note_200*200);
        printf("Total number of notes:%d\t amt is:%d", note_200, amt);
    }
    else if(amount>100)
    {
        note_100=amount/100;
        amt=amount-(note_100*100);
        printf("Total number of notes:%d\t amt is:%d", note_100, amt);
    }
    else if(amount>50)
    {
        note_50=amount/50;
        amt=amount-(note_50*50);
        printf("Total number of notes:%d\t amt is:%d", note_50, amt);
    }
    else if(amount>20)
    {
        note_20=amount/20;
        amt=amount-(note_20*20);
        printf("Total number of notes:%d\t amt is:%d", note_20, amt);
    }
    else if(amount>10)
    {
        note_10=amount/10;
        amt=amount-(note_10*10);
        printf("Total number of notes:%d\t amt is:%d", note_10, amt);
    }
    else if(amount>5)
    {
        note_5=amount/5;
        amt=amount-(note_5*5);
        printf("Total number of notes:%d\t amt is:%d", note_5, amt);
    }
    else if(amount>2)
    {
        note_2=amount/2;
        amt=amount-(note_2*2);
        printf("Total number of notes:%d\t amt is:%d", note_2, amt);
    }
    else if(amount>1)
    {
        note_1=amount/1;
        amt=amount-(note_1*1);
        printf("Total number of notes:%d\t amt is:%d", note_1, amt);
    }


}