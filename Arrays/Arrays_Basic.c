// Wap to accept marks of 5 students in an array and print them to the screen.

#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];

    printf("Enter the marks for student 1: ");
    scanf("%d",&marks[0]);

    printf("Enter the marks for student 2: ");
    scanf("%d",&marks[1]);

    printf("Enter the marks for student 3: ");
    scanf("%d",&marks[2]);

    printf("Enter the marks for student 4: ");
    scanf("%d",&marks[3]);

    printf("Enter the marks for student 5: ");
    scanf("%d",&marks[4]);

    printf("\n");

    printf("You have entered %d %d %d %d and %d\n",marks[0],marks[1],marks[2],marks[3],marks[4]);

    getch();
    return 0;
}
