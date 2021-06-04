#include<stdio.h>
#include<conio.h>
int swap(int *a, int *b);

int main()
{
    int x=3, y=4;

    printf("Value of x and y before swapping is %d and %d\n\n",x,y);

    swap(&x, &y);

    printf("Value of x and y after swapping is %d and %d\n\n",x,y);

    getch();
    return 0;
}

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

