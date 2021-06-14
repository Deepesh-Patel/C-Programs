/* Create 2-d array by taking input from the user.
   Write a display function to print the content of this 2-d array in the screen. */

#include<stdio.h>
#include<conio.h>

int main()
{
    display();

    getch();
    return 0;
}

int display(int stud, int sub)
{
    stud = 2;
    sub = 4;
    int marks[2][4];
    int i, j;

    for(i=0; i<stud; i++)
    {
        for(j=0; j<sub; j++)
        {
            printf("Enter the marks of student %d in %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    printf("****************************************************\n");

    for(i=0; i<stud; i++)
    {
        for(j=0; j<sub; j++)
        {
            printf("The marks of student %d in %d is %d\n", i+1, j+1, marks[i][j]);
        }

        printf("\n");
    }
}
