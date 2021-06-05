/* Wap using function which calculates the sum and average of two numbers.
   Use pointers and print the values of sum and average in main(). */

#include<stdio.h>
#include<conio.h>

void sum_And_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;

    sum_And_avg(i, j, &sum, &avg);

    printf("sum: %d\n\n",sum);
    printf("average: %f\n",avg);

    getch();
    return 0;
}
