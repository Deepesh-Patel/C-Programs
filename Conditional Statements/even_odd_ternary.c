#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("\n");
    
    (n%2 == 0)?printf("%d is even number\n",n):printf("%d is odd number\n",n);
    
    getch();
    return 0;
}
