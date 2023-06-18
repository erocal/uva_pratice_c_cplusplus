#include<stdio.h>

void conquer( int );

int main()
{
    int i,num,month,day,flag;
    scanf("%d",&num);
    while(num > 0)
    {
        scanf("%d%d",&month,&day);
        if(month == 1)
        {
            flag = day-10;
            conquer(flag);
        }
        else if(month == 2)
        {
            flag = day-21;
            conquer(flag);
        }
        else if(month == 3)
        {
            flag = day-7;
            conquer(flag);
        }
        else if(month == 4)
        {
            flag = day-4;
            conquer(flag);
        }
        else if(month == 5)
        {
            flag = day-9;
            conquer(flag);
        }
        else if(month == 6)
        {
            flag = day-6;
            conquer(flag);
        }
        else if(month == 7)
        {
            flag = day-11;
            conquer(flag);
        }
        else if(month == 8)
        {
            flag = day-8;
            conquer(flag);
        }
        else if(month == 9)
        {
            flag = day-5;
            conquer(flag);
        }
        else if(month == 10)
        {
            flag = day-10;
            conquer(flag);
        }
        else if(month == 11)
        {
            flag = day-7;
            conquer(flag);
        }
        else if(month == 12)
        {
            flag = day-12;
            conquer(flag);
        }
        num--;
    }
    return 0;
}

void conquer(int ans)
{
    if((ans % 7) == 0)
    {
        printf("Monday\n");
    }
    if((ans % 7) == 1 || (ans % 7) == -6)
    {
        printf("Tuesday\n");
    }
    if((ans % 7) == 2 || (ans % 7) == -5)
    {
        printf("Wednesday\n");
    }
    if((ans % 7) == 3 || (ans % 7) == -4)
    {
        printf("Thursday\n");
    }
    if((ans % 7) == 4|| (ans % 7) == -3)
    {
        printf("Friday\n");
    }
    if((ans % 7) == 5|| (ans % 7) == -2)
    {
        printf("Saturday\n");
    }
    if((ans % 7) == 6|| (ans % 7) == -1)
    {
        printf("Sunday\n");
    }
}
