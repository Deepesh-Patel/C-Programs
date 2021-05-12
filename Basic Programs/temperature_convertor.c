//WAP to convert celsius (Centigrade degrees temperature to fahrenheit).

#include<stdio.h>
int main()
{
    float cel;
    float far;

    printf("Enter the value of celsius:\n");
    scanf("%f",&cel);

    far=(cel*9/5)+32;
    printf("Conversion of celsius(%f) to fahrenheit is:\n%f",cel, far);
    return 0;
}
