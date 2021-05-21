#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    
    printf("Enter any single character: \n");
    scanf("%c",&ch);
    
    switch(ch)
    {
        case 'A': 
        case 'a': printf("Welcome\n");
        break;
        
        case 'B':
        case 'b': printf("Good Bye\n");
        break;
        
        case 'C':
        case 'c': printf("Have a nice day\n");
        break;
        
        case 'D':
        case 'd': printf("Good day\n");
        break;
        
        default: printf("You have entered invalid character! Please enter valid one.");
        break;
    }
    
    getch();
    return 0;
}
