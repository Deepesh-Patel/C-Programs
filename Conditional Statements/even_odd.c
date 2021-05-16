#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    
    printf("Enter any number: \n");
    scanf("%d",&n);
    
    if(n%2 == 0)
    {
        printf("%d is even number.\n",n);
    }
    else
    {
        printf("%d is odd number.\n",n);
    }
    
    return 0;
}
