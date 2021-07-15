/*To print the following star pattern

 *   *
 **  *
 * * *
 *  **
 *   *
              */

#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int i, j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || j==n-1 || i==j)
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
