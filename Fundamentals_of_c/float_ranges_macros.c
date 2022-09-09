// find ranges using macros.

#include<stdio.h>
#include<float.h>

main()
{

    // floting point data type ranges using macros.
    
    printf("float type max range is:%f \n", FLT_MAX);
    printf("float type min range is:%f \n", FLT_MIN);

    printf("double type max range is:%le \n", DBL_MAX);
    printf("double type min range is:%le \n", DBL_MIN);
    
    printf("long double type max range is:%Le \n", LDBL_MAX);
    printf("long double type range is:%Le \n", LDBL_MIN);

}