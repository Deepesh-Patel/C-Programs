/* Wap using functions to print the following pattern (first n lines).
   *
   ***
   *****
*/

#include<stdio.h>
#include<conio.h>
void printPattern(int n);

int main()
{
    int n = 3;
    printPattern(n);


    getch();
    return 0;
}

void printPattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }

    printPattern(n-1);
    int i;

    for(i=0; i<(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}
