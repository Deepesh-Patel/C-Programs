#include<stdio.h>
int main()
{
    int principle,rate,years;
    int sinterest;
    
    printf("Enter The Principle: \n");
    scanf("%d",&principle);
    
    printf("Enter The Rate: \n");
    scanf("%d",&rate);
    
    printf("Enter The Years: \n\n");
    scanf("%d",&years);
    
    sinterest = (principle*rate*years)/100;
    printf("The Value Of Simple Interest:%d",sinterest);
    
    return 0; 
}
