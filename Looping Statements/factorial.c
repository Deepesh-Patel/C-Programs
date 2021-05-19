//Wap to calculate the factorial of given number n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact;
    
    printf("Enter any number to know its factorial:\n");
    scanf("%d",&n);
    printf("\n");
    
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n",n,fact);
     
    getch();
    return 0;
}