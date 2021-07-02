#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char *st = "this";
    char st2[30];

    strcpy(st2, st);

    printf("Now the st2 is %s", st2);

    getch();
    return 0;
}
