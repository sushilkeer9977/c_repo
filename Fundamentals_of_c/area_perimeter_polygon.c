// program to find perimeter of regular polygon.Read value at run time.

#include<stdio.h>

main()
{
    int  s1, s2, s3, s4, s5, s6, perimeter;

    printf("Enter a value of perimeter for polygon:");
    scanf("%d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6);

    // area = 1/2*(sl*apto*nl);
    perimeter = s1+s2+s3+s4+s5+s6;
    printf("Perimeter is:%d",perimeter);

}

