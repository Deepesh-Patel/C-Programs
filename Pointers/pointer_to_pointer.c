// Wap to print the value of a variable i by using "pointer to pointer" type of variable.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 486;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i is %d\n",**ptr_ptr);

    getch();
    return 0;
}
