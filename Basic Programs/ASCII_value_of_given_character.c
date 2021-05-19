#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter the character to prints it's ASCII Value:\n ");
    scanf("%c",&ch);
    printf("\n");

    printf("The given character is %c and it's ASCII Value is: %d\n",ch,ch);

    getch();
    return 0;
}