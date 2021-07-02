#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char st[30] = "Hello ";
    char *st2 = "Michael";

    strcat(st, st2);

    printf("Now the st is %s", st);

    getch();
    return 0;
}
