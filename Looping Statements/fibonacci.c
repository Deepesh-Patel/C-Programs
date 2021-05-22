#include<stdio.h>   
#include<conio.h> 
int main()    
{ 
    int n1=0,n2=1,n3,i,num;   
    printf("Enter the number of elements: \n");
    scanf("%d",&num);
    printf("\n");
    
    printf("Fibonacci series: \n%d\n%d\n",n1,n2);
    
    for(i=2; i<num; ++i)
    {
        n3 = n1 + n2;
        printf("%d\n",n3);
        n1 = n2;
        n2 = n3;
    }
    
    getch();
    return 0;
}
     
