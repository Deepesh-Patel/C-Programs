#include<stdio.h>
#include<conio.h>
int main()
{
    int n_stud = 3;
    int n_sub = 5;
    int marks[3][5];
    int i, j;

    for(i=0; i<n_stud; i++)
    {
        for(j=0; j<n_sub; j++)
        {
            printf("Enter the marks of student %d in %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    printf("****************************************************\n");

    for(i=0; i<n_stud; i++)
    {
        for(j=0; j<n_sub; j++)
        {
            printf("The marks of student %d in %d is %d\n", i+1, j+1, marks[i][j]);
        }

        printf("\n");
    }

    getch();
    return 0;
}
