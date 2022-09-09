#include<limits.h>
#include<stdio.h>

main()
{
    printf("short int type size is:%hd \n", sizeof(short int));
    printf("unsinged int type size is:%hu \n", sizeof(unsigned short int));
    printf("int type size is:%d \n", sizeof(int));
    printf("unsigned int type size is:%u \n", sizeof(unsigned int));
    printf("long int type size is:%ld \n", sizeof(long int));
    printf("unsiged long int type size is:%lu \n", sizeof(unsigned long int));
    printf("long long int type size is:%lld \n", sizeof(long long int));
    printf("unsigned long long int type size is:%llu \n", sizeof(unsigned long long int));
    printf("char type size is:%d \n", sizeof(char));
    printf("flaot type size is:%d", sizeof(float));
}