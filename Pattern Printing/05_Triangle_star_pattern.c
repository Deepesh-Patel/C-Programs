#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int i, j;

    printf("How many rows do you want? \n");
    scanf("%d",&n);
    printf("\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<(2*n); j++)
        {
            if(j>=(n-1-i) && j<=(n-1+i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
