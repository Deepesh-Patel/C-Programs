//Wap a program to determine whether a character is entered by the user is Uppercase or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    
    printf("Enter the character\n");
    scanf("%c", &ch);
    
    if(ch>=65 && ch<=90)    // 65-90 = A-Z ASCII Values
    {
        printf("It is uppercase");
    }
    else
    {
        printf("It is not uppercase");
    }
    
    getch();
    return 0;
}
