// find ranges using macros.

#include<stdio.h>
#include<limits.h>
#include<float.h>

main()
{   
    // int data type ranges using macros.

    printf("short int type max range is:%hd \n", SHRT_MAX);
    printf("short int type min range is:%hd \n", SHRT_MIN);
    printf("unsigned short int type max range is:%hu \n", USHRT_MAX);
    printf("int type max range is:%d \n", INT_MAX);
    printf("int type min range is:%d \n", INT_MIN);
    printf("unsigned int type max range is%u \n", UINT_MAX);
    printf("long int type max range is:%ld \n", LONG_MAX);
    printf("long int type min size is:%ld \n", LONG_MIN);
    printf("unsigned long int max range is:%lu \n", ULONG_MAX);
    printf("long long int type max range is:%lld \n", LLONG_MAX);
    printf("long long int type min range is:%lld \n", LLONG_MIN);
    printf("unsigned long long int type max range is:%llu \n", ULLONG_MAX);

    // floting point data type ranges using macros.
    
    printf("float type max range is:%f \n", FLT_MAX);
    printf("float type min range is:%f \n", FLT_MIN);
    printf("double type max range is:%le \n", DBL_MAX);
    printf("double type min range is:%le \n", DBL_MIN);
    printf("long double type max range is:%Le \n", LDBL_MAX);
    printf("long double type range is:%Le \n", LDBL_MIN);

    // floting point data type precision.

    printf("flot type precesion:%d \n", FLT_DIG);
    printf("double type precesion:%d \n", DBL_DIG);
    printf("long double precesion:%d", LDBL_DIG);
}