#include<stdio.h>
int main()
{
    float r, pi=3.14;

    printf("\n*************** ENTER RADIUS ***************\n\n");

    printf("Enter radius of a circle:\n ");
    scanf("%f",&r);

    printf("\n*************** AREA ***************\n\n");

    printf("Area of circle: %f \n",(pi*r*r));

    return 0;
}
