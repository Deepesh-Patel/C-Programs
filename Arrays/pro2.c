//Create an array of size 3 x 10 containing multiplication table of the numbers 2, 7 and 9 respectively.

#include<stdio.h>
#include<conio.h>
int main()
{
    int mul[3][10];
    int i;

    for(i=0; i<=10; i++)
    {
       mul[0][i] = 2*(i+1);
    }

    printf("Multiplication table of 2 is:\n");

    for(i=0; i<10; i++)
    {
       printf("2 x %d = %d\n",i+1, mul[0][i]);
    }

    printf("************************************\n\n");
    printf("Multiplication table of 7 is:\n");

    for(i=0; i<=10; i++)
    {
       mul[0][i] = 7*(i+1);
    }

    for(i=0; i<10; i++)
    {
       printf("7 x %d = %d\n",i+1, mul[0][i]);
    }

    printf("************************************\n\n");
    printf("Multiplication table of 9 is:\n");

    for(i=0; i<=10; i++)
    {
       mul[0][i] = 9*(i+1);
    }

    for(i=0; i<10; i++)
    {
       printf("9 x %d = %d\n",i+1, mul[0][i]);
    }

    getch();
    return 0;
}
