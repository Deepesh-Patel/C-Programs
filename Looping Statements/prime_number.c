//Wap to check whether a given number is prime or not.

#include<stdio.h> 
#include<conio.h> 
int main()
{
    int n, i, flag=0;    
    
    printf("Enter the number to check prime:\n");    
    scanf("%d",&n);
    printf("\n");
       
    for(i=2;i<=n/2;i++)    
    {  
        if(n%i==0)    
        {    
            printf("Number is not prime");    
            flag=1;    
            break;    
        }    
    }    
    if(flag==0)
    {  
        printf("Number is prime"); 
    }    
    
    getch();
    return 0;  
 }    
