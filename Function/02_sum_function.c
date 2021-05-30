#include<stdio.h>
#include<conio.h>
int main()
{
    int c;
    c = sum(5,7);     //function call
    printf("The value of c is: %d\n",c);

    getch();
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
