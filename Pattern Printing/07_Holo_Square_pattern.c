#include<stdio.h>
#include<conio.h>
int main()
{
    int rows;
    int i, j;

    printf("How many rows do you want? \n");
    scanf("%d",&rows);
    printf("\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows; j++)
        {
            if(i==0 || j==0 || i==rows-1 || j==rows-1)
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
