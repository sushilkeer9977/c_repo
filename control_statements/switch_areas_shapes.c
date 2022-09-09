//Program to find area of selected shape by the user:
#include<stdio.h>
main()
{
    int shape,x,y,radius,lenth,bredth,hight,base;
    float pi=3.14,area;
    printf("1-circle\n");
    printf("2-rectangle\n");
    printf("3-tringle\n");
    printf("select shape to find the area[1 to 3]:");
    scanf("%d", &shape);

    switch(shape)
    {
        case 1:
            printf("enter the radius value:");
            scanf("%d",&radius);
            area=pi*radius*radius;
            printf("area is:%f", area);
            break;
        case 2:
            printf("Enter lenth and bredth value:");
            scanf("%d%d", &lenth,&bredth);
            area = lenth*bredth;
            printf("area is:%f", area);
            break;
        case 3:
            printf("Enter hight and base value:");
            scanf("%d%d",&lenth,&hight);
            area = (hight*base)/2;
            printf("area is:%f", area);
            break;

        default:
            printf("invalid shape");
            

    }
}