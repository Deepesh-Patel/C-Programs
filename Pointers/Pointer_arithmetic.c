#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 34;
    int *ptr = &i;

    printf("The value of ptr is %u\n",ptr);

    ptr++;

    printf("The value of ptr after increment is %u\n",ptr);

    getch();
    return 0;

}
