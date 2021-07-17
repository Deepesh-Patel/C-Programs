#include<stdio.h>
#include<conio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee michael = {101,7845,"Michael"};

    printf("The code of employee: %d\n", michael.code);
    printf("The salary of employee: %.2f\n", michael.salary);
    printf("The name of employee: %s\n", michael.name);

    getch();
    return 0;
}
