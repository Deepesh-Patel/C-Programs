/* Create an array of 10 numbers.
   Verify using pointer arithmetic that (ptr + 2) points to the
   third element where ptr is a pointer pointing to the first
   element of the array. */

 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int arr[10];
     int *ptr = &arr;

     ptr = ptr + 2;

     if(ptr == &arr[2])
     {
         printf("These point to the same location in memory\n");
     }
     else
     {
         printf("These points do not points to the same location in memory\n");
     }

     getch();
     return 0;
 }
