#include<stdio.h>
#include<conio.h>

int main()
{
    printf("size of int: ");
    printf("%d\n\n",sizeof(int));

    printf("size of char: ");
    printf("%d\n\n",sizeof(char));

    printf("size of float: ");
    printf("%d\n\n",sizeof(float));

    printf("size of double: ");
    printf("%d\n\n",sizeof(double));

    printf("size of unsigned int: ");
    printf("%d\n\n",sizeof(unsigned int));

    printf("size of long: ");
    printf("%d\n\n",sizeof(long));

    printf("size of long  int: ");
    printf("%d\n\n",sizeof(long int));

    printf("size of unsigned long: ");
    printf("%d\n\n",sizeof(unsigned long));

    getch();

    return 0;

}