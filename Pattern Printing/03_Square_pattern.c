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
            printf("* ");
        }

        printf("\n");
    }

    getch();
    return 0;
}
