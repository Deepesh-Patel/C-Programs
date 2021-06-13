#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[4];
    int *ptr;
    int i;

    ptr = &marks[0];

    for(i=0; i<4; i++)
    {
        printf("Enter the value of marks for student %d: ",i+1);
        scanf("%d",ptr);
        ptr++;
    }

    printf("\n");

    for(i=0; i<4; i++)
    {
        printf("The value of marks for student %d is %d\n",i+1, marks[i]);
    }

    getch();
    return 0;
}
