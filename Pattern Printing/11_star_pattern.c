/*To print following star pattern

 *   *
 *   *
 *****
 *   *
 *   *
              */

#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int i, j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==n/2+1)
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
