// Wap to accept marks of 5 students in an array using for loop and print them to the screen.

#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter the marks for student %d: ", i+1);
        scanf("%d",&marks[i]);
    }

    printf("\n");

    for(i=0; i<5; i++)
    {
        printf("The value of marks for student %d is: %d\n", i+1, marks[i]);
    }

    getch();
    return 0;
}

