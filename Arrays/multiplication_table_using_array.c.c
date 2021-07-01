//Wap to create an array of 10 integers and store multiplication table of any number entered by user.

#include<stdio.h>
#include<conio.h>
int main()
{
    int mul[10];
    int n,i;

    printf("Enter any number to know its multiplication table: ");
    scanf("%d",&n);
    printf("\n");

    for(i=0; i<=10; i++)
    {
        mul[i] = n*(i+1);
    }

    for(i=0; i<10; i++)
    {
       printf("%d x %d = %d\n", n, i+1, mul[i]);
    }

    getch();
    return 0;
}
