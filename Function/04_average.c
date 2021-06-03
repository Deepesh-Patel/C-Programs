//Wap using functions to find average of three numbers.

#include<stdio.h>
#include<conio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Enter the value of a:\n");
    scanf("%d",&a);

    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("Enter the value of c:\n");
    scanf("%d",&c);

    printf("Average of %d, %d & %d is: %f\n",a,b,c,average(a,b,c));

    getch();
    return 0;
}

float average(int a, int b, int c)
{
    int result;
    result = (float)(a + b + c)/3;

    return result;
}
