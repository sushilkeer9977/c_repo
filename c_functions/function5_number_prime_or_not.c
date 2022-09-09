//Define a function to check whether the number is prime or not:
#include<stdio.h>

void prime(int);
void prime(int n)
{
    int i,count;
    count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
        printf("Number is prime:%d\n",n);
    else
        printf("Number is not prime:%d\n", n);

}
main()
{
    //our requirnment is we want check number is prime or not between 1 to 20.
    int i;
    for(i=1;i<=20;i++)
        prime(i);
}