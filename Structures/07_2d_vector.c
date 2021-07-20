#include<stdio.h>
#include<conio.h>

struct Vector
{
    int x;
    int y;
};

int main()
{
    struct Vector v1,v2;
    v1.x = 60;
    v1.y = 96;

    printf("X dim is %d and Y dim is %d for v1\n",v1.x,v1.y);

    v2.x = 70;
    v2.y = 89;

    printf("X dim is %d and Y dim is %d for v2\n",v2.x,v2.y);

    getch();
    return 0;
}
