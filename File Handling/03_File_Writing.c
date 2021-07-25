#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
    int number = 13;

    ptr = fopen("generatedText.txt","w");
    fprintf(ptr,"The number is %d\n",number);
    fclose(ptr);

    getch();
    return 0;
}
