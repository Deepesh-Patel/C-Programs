#include <stdio.h>
#include <conio.h>

int main()
{
    char sname[50];
    int rollno;
    char course[30];
    char city[20];

    printf("\n********** ENTER STUDENT DETAILS **********\n\n");

    printf("Enter the roll no: ");
    scanf("%d",&rollno);

    printf("Enter the name:  ");
    scanf("%s",&sname);

    printf("Enter your Course name: ");
    scanf("%s",&course);

    printf("Enter your city name: ");
    scanf("%s",&city);

    printf("\n\n********** STUDENT DETAILS **********\n");

    printf("\nRoll no:  %d \nName: %s \nCourse: %s \nCiyt: %s \n ",rollno,sname,course,city);

    return 0;
}
