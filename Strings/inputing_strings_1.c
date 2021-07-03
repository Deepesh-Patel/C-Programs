//Wap to take string as an input from the user using %c and %s. Confirm that the strings are equal.

#include<stdio.h>
#include<conio.h>
int main()
{
    char str[30];
    char str1[30];
    char c;
    int i = 0;

    printf("Enter the value of 1st string: \n");
    scanf("%s", str);

    printf("Enter the value of 2nd string character by character: \n");

    while(c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);

        str1[i] = c;
        i++;
    }
    str1[i] = '\0';

    printf("The value of 1st string is %s\n", str);
    printf("The value of 2nd string is %s\n", str1);

    getch();
    return 0;
}
