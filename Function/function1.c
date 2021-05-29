/*
Wap with the functions
1. Good morning which prints "Good morning"
2. Good afternoon which prints "Good afternoon"
3. Good night which prints "Good night"
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();

    getch();
    return 0;
}

void goodMorning()
{
    printf("Good morning\n");
}

void goodAfternoon()
{
    printf("Good afternoon\n");
}

void goodNight()
{
    printf("Good night\n");
}

