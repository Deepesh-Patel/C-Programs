#include<stdio.h>
#include<conio.h>

void printArray(int *ptr, int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("The value of element %d is %d\n\n", i+1, *(ptr+i));
    }
}

int main()
{
    int arr[] = {1, 2, 568, 4578, 4, 589, 1458, 1458};

    printArray(arr, 8);

    getch();
    return 0;
}
