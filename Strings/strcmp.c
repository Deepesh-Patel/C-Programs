#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char st[30] = "Hello ";
    char *st2 = "Michael";

    int va = strcmp(st, st2);

    printf("Now the va is %d", va);

    getch();
    return 0;
}

