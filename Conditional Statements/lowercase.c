//Wap a program to determine whether a character is entered by the user is lowercase or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    
    printf("Enter the character\n");
    scanf("%c", &ch);
    
    if(ch<=122 && ch>=97)       // 97-122 = a-z ASCII Values
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    
    getch();
    return 0;
}
