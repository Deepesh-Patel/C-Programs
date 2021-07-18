#include<stdio.h>
#include<conio.h>

struct emp
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct emp e1;
    struct emp *ptr;
    ptr = &e1;

    ptr->code = 101;

    printf("Code is %d",e1.code);

    getch();
    return 0;
}
