#include<stdio.h>
#include<conio.h>
int main()
{
    float a, b;
    
    printf("\n********** ENTER THE TWO NUMBERS **********\n\n");
    
    printf("Enter a and b for arithmetic operation:\n");
    scanf("%f%f",&a,&b);
    
    printf("\n********** ARITHMETIC OPERATION **********\n\n");
    
    printf("(a+b):%f ",(a+b));
    printf("\n");
    printf("(a-b):%f ",(a-b));
    printf("\n");
    printf("(a*b):%f ",(a*b));
    printf("\n");
    printf("(a/b):%f",(a/b));
    printf("\n");
    
    return 0;
}
