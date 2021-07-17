#include<stdio.h>
#include<conio.h>

struct emp
{
    int code;
    float salary;
    char *name;
};

int main()
{
    struct emp e1;
    e1.code = 1001;
    e1.salary = 20000;
    e1.name ="Michael";

    printf("Employee code is %d\n",e1.code);
    printf("Employee salary is %1.f\n",e1.salary);
    printf("Employee name is %s\n",e1.name);

    getch();
    return 0;
}
