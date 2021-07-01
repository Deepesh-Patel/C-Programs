//Wap containing a function which reverses the array passed in it.

#include<stdio.h>
#include<conio.h>

void rev(int *arr, int n)
{
    int temp;
    int i;

    for(i=0; i<(n/2); i++)
    {
       temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int i;

    rev(arr, 7);

    for(i=0; i<7; i++)
    {
       printf("The value of %d element is: %d\n", i, arr[i]);
    }

    getch();
    return 0;
}
