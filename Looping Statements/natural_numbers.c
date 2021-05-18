//Wap to print natural numbers from 10 to 20 when initial loop counter i is initialised to 0.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0;
    while(i<=20)
    {
        if (i >= 10)
        { 
             printf("i: %d\n", i);
        }
        i++; // i = i + 1;
    }
    
    getch();
    return 0;
}
