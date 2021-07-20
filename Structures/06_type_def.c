#include<stdio.h>
#include<conio.h>

typedef struct employee
{
    int code;
    float salary;
    char *name;
}empinfo;

void show(empinfo emp)
{
    printf("Employee code: %d\n",emp.code);
    printf("Employee salary: %.2f\n",emp.salary);
    printf("Employee name: %s\n",emp.name);
}

int main()
{
    empinfo e1;
    empinfo *ptr;

    ptr =&e1;

    ptr->code=1001;
    ptr->salary=30000.56;
    (*ptr).name="Michael";

    show(e1);

    getch();
    return 0;
}
