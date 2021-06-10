#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0, n2=0, temp=0;

    printf("Enter any two number:\n");
    scanf("%d%d",&n1,&n2);

    printf("\n\nBefore swapping, N1=%d, N2=&%d",n1,n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\n\nAfter swapping, N1=%d, N2=%d",n1,n2);

    getch();

    return 0;
}
