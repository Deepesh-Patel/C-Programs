#include<stdio.h>
#include<conio.h>
int main()
{
     char str[] = "Michael";
     char *ptr = str;

     while(*ptr != '\0')
     {
         printf("%c", *ptr);
         ptr++;
     }

     getch();
     return 0;
}
