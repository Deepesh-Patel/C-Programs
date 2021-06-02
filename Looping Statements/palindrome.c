#include<stdio.h>
#include<conio.h>  
int main()    
{    
   int n,r,sum=0,temp;
    
   printf("Enter the number:\n");    
   scanf("%d",&n);  
   printf("\n");
  
   temp=n;    
   while(n>0)    
   {    
      r=n%10;    
      sum=(sum*10)+r;    
      n=n/10;    
   }
    
   if(temp==sum) 
   {   
      printf("The given number is palindrome number\n");   
   } 
   else 
   {   
      printf("The given number is not palindrome number\n");  
   }

   getch();
   return 0;  
}   
