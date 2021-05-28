#include<stdio.h>
int main()
{
    int l, b;
    float pi=3.14, r;
    float h;
    int s;

    printf("\n******************** ENTER ALL VALUES ********************\n\n");

    printf("Enter Length and Breadth of rectangle:\n");
    scanf("%d%d",&l,&b);

    printf("Enter Radius of a circle:\n");
    scanf("%f",&r);

    printf("Enter Side of a square:\n");
    scanf("%d",&s);

    printf("Enter Height and Radius of cylinder:\n");
    scanf("%f%f",&h,&r);

    printf("\n******************** AREA ********************\n\n");

    printf("Area of Rectangle: %d\n",(l*b));
    printf("Area of Circle: %f\n",(pi*r*r));
    printf("Area of Square: %d\n",(s*s));

    printf("\n******************** VOLUME ********************\n\n");

    printf("Volume of Cylinder: %f\n",(pi*r*r*h));

    return 0;
}
