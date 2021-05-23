/*Write a program to find out whether a student pass or fail.If it required total 40% and
 atleast 33% in each subject to pass assume 3 Subjects and take marks as input from the user.*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int Phy,Chem,Math;
    float  total;

    printf("Enter The Marks of physics \n");
    scanf("%d",&Phy);

    printf("Enter The Marks of Chemistry \n");
    scanf("%d",&Chem);

    printf("Enter The Marks of Mathamatics \n");
    scanf("%d",&Math);

    printf("\n");

    total = (Phy + Chem + Math)/3;

    if((total<40)||(Phy<33) ||(Chem<33)||(Math<33))
    {
        printf("Your Total Percentage is %f and you are Fail",total);
    }
    else
    {
        printf("Your Total Percetage is %f and you are Pass",total);
    }
    
    getch();
    return 0;
}
