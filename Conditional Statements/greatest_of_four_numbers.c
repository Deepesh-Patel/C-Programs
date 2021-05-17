//Wap to find greatest of four numbers entered by the user.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n1, n2, n3, n4;
    
    printf("Enter four numbers: \n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    printf("\n");
    
    if(n1==n2 && n2==n3 && n3==n4)
    {
        printf("All four numbers are equal\n");
    }
    else if(n1>n2 && n1>n3 && n1>n4)
    {
        printf("%d is greater\n",n1);
    }
    else
    {
        if(n2>n1 && n2>n3 && n2>n4)
        {
            printf("%d is greater\n",n2);
        }
        else if(n3>n1 && n3>n2 && n3>n4)
        {
            printf("%d is greater\n",n3);
        }
        else
        {
            printf("%d is greater\n",n4);
        }
    }
    
    getch();
    return 0;
}
