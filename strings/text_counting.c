//Program to count number of words, lines & chars in given text:
#include<stdio.h>
main()
{
    char ch;
    int nw=0,nl=0,nc=0;

    printf("Enter text:\n");

    while((ch = getchar())!= EOF)
    {
        if(ch==' ')
        {
            nw++;
        }
        else if(ch=='\n')
        {
            nl++;
            nw++;
        }
        else
        {
            nc++;
        }
    }

    printf("no of words:%d\n", nw);
    printf("no. of lines:%d\n", nl);
    printf("no. of char:%d\n", nc);

}