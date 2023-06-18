#include<stdio.h>
#include<string.h>

int main()
{
    int num,i,flag,flag2,mun,sw;
    while(scanf("%d",&num)!=EOF)
    {
        printf("%d ",num);
        mun = 0;
        sw = num;
        while(sw > 0)
        {
            mun = (mun*10) + (sw%10);
            sw /= 10;
        }
        i = 2;
        flag = 0;
        flag2 = 0;
        sw = num;
        while(i < sw)
        {
            if(sw % i == 0)
            {
                printf("is not prime.\n");
                flag = 1;
                break;
            }
            i++;
        }
        i = 2;
        while(i < mun)
        {
            if(mun % i == 0)
            {
                flag2 = 1;
                break;
            }
            i++;
        }
        if(flag == 0 && flag2 == 0 && num != mun)
        {
            printf("is emirp.\n");
        }
        else if(flag == 0)
        {
            printf("is prime.\n");
        }
    }
    return 0;
}
