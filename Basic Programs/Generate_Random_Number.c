//Wap to generate a random number ranging from 1 to 100.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100 + 1;      //Generates a random number between 1 to 100.

    printf("The number is %d",number);

    getch();
    return 0;
}
