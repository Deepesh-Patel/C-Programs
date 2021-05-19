//Wap a program to print n natural numbers in reverse order.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("\n");
    
    for(int i=n; i; i--)
    {
        printf("i:%d\n",i);
    }
    
    getch();
    return 0;
}
