//Create a three-dimensional array & print the address of its elements in increasing order.

#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[2][3][4];
    int i, j, k;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<4; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
                printf("\n");
            }
        }
    }

    getch();
    return 0;
}
