#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("Enter any values for a, b & c: \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n");
		
    printf("a>b && a>c: %d\n",(a>b && a>c));
    printf("b>a && b>c: %d\n",(b>a && b>c));
    printf("c>a && c>b: %d\n",(c>a && c>b));
    printf("a>b || a>c: %d\n",(a>b || a>c));
    printf("b>a || b>c: %d\n",(b>a || b>c));
    printf("c>a || c>b: %d\n",(c>a || c>b));
    
    return 0;
}
