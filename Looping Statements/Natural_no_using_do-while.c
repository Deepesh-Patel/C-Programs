//Wap to print first n natural numbers using do-while loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    int n;

    printf("Enter any no: \n");
    scanf("%d",&n);
    
    do
    {
        printf("i: %d\n",i+1);
        i++;
    }
    while(i<n);
    
    getch();
    return 0;
}
