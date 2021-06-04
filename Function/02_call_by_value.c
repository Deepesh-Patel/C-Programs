#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5, b=7;

    printf("The value of 5+7 is: %d\n",sum(a,b));

    getch();
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
