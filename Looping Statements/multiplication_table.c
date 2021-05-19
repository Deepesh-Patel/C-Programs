//Wap to print multiplication table of a given number tb.

#include<stdio.h>
#include<conio.h>
int main()
{
    int tb;
    
    printf("Enter any number to know its multiplication table: \n");
    scanf("%d",&tb);
    printf("\n");
    
    printf("\n********** MULTIPLICATION TABLE **********\n\n");
    
    for(int i=1; i<=10; i++)
    {
        printf("%d*%d: %d\n",tb,i,(tb*i));
    }
    
    getch();
    return 0;
}
