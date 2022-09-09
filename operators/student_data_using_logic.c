// program stduent inforamtion and 12th standerd result.

#include<stdio.h>
#include<string.h>

main()
{
    char name[100], address[100], email[100], branch[100];
    char section;
    int hindi,maths,english,phygics,chemistry;
    float Total;
    long long int contact_num;
    long long int roll_num;

    printf("### student information ### :\n");
    printf("Enter your name:");
    strcpy(name, "");
    scanf("%s", name);

    printf("Enter your address:");
    strcpy(address, "");
    scanf("%s", address);

    printf("Enter your email:");
    strcpy(email, "");
    scanf("%s", email);

    printf("Enter your branch:");
    strcpy(branch, "");
    scanf("%s", branch);

    printf("Enter your section:");
    scanf(" %c", &section);

    printf("Enter your contact number:");
    scanf("%d", &contact_num);

    printf("Enter your roll number:");
    scanf("%d", &roll_num);


    printf("student name is:%s\n student address is:%s\n student email is:%s\n student branch is:%s\n student section is:%c\n student contact num is:%lld\n student roll number is:%lld\n", name,address,email,branch,section,contact_num,roll_num);

    printf("Enter your english marks:");
    scanf("%d", &hindi);

    printf("Enter your maths marks:");
    scanf("%d", &maths);

    printf("Enter your english marks:");
    scanf("%d", &english);

    printf("Enter your phygics marks:");
    scanf("%d", &phygics);

    printf("Enter your chemistry:");
    scanf("%d", &chemistry);

    Total = (hindi+maths+english+phygics+chemistry)/5;
    printf("Your result is:%.3f\n", Total);

    if(hindi>=33 && english>=3 && maths>=33 && phygics>=33 && chemistry>=33)
    {
        printf("congretualation\n");
        printf("You are pass");
    }
    else
    {
        printf("You are fail \n");
        printf("you need to give suppl. exam");
    }




}