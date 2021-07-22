#include<stdio.h>
#include<conio.h>

typedef struct complex
{
    int real;
    int imaginary;
}comp;

void display(comp c)
{
    printf("The real part is %d\n",c.real);
    printf("The imaginary part is %d\n",c.imaginary);
}

int main()
{
    comp cnums[5];
    int i;

    for(i=0; i<5;i++)
    {
        printf("Enter the real part for %d number: ",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary part for %d number : ",i+1);
        scanf("%d",&cnums[i].imaginary);
    }

    for(i=0;i<5;i++)
    {
        display(cnums[i]);
    }

    getch();
    return 0;
}
