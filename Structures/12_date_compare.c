#include<stdio.h>
#include<conio.h>

struct date
{
    int day;
    int month;
    int year;
};

int display(struct date d)
{
    printf("The date is %d/%d/%d\n",d.day,d.month,d.year);
}

int comp_date(struct date d1, struct date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }

    if(d1.month>d2.month)
    {
        return 1;
    }
    if(d1.month<d2.month)
    {
        return -1;
    }

    if(d1.day>d2.day)
    {
        return 1;
    }
    if(d1.day<d2.day)
    {
        return -1;
    }

    return 0;
}

int main()
{
    struct date d1 = {25,5,94};
    struct date d2 = {10,12,80};

    display(d1);
    display(d2);

    int result = comp_date(d1,d2);

    printf("The date comparison result is %d",result);

    getch();
    return 0;
}
