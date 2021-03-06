#include<stdio.h>
#include<conio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

void display_time(struct time t)
{
    printf("Time is %d:%d:%d\n",t.hour,t.minute,t.second);
}

int time_comp(struct time t1, struct time t2)
{
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    if(t1.hour<t2.hour)
    {
        return -1;
    }

    if(t1.minute>t2.minute)
    {
        return 1;
    }
    if(t1.minute<t2.minute)
    {
        return -1;
    }

    if(t1.second>t2.second)
    {
        return 1;
    }
    if(t1.second<t2.second)
    {
        return -1;
    }

    return 0;
}

int main()
{
    struct time t1 = {10,35,46};
    struct time t2 = {9,35,46};

    display_time(t1);
    display_time(t2);

    int result = time_comp(t1,t2);

    printf("The result of time comparison is %d",result);

    getch();
    return 0;
}
