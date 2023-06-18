#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,flag;
    long long int num1;
    int num[15] = {'\0'};
    while(scanf("%lld",&num1)!=EOF)
    {
        flag = 0;
        for(i = 0;i < 15;i++)
        {
            num[i] = num1%10;
            num1 /= 10;
        }
        count++;
        if(count < 10)
            printf("   %d.",count);
        else if(count < 100)
            printf("  %d.",count);
        else if(count < 1000)
            printf(" %d.",count);
        else
            printf("%d.",count);
        if(num[14] != 0)
        {
            printf(" %d kuti",num[14]);
            flag = 1;
        }
        if(num[12] != 0 || num[13] != 0)
        {
            if(num[13] != 0)
                printf(" %d%d lakh",num[13],num[12]);
            else if(num[12] != 0)
                printf(" %d lakh",num[12]);
            else
                printf(" lakh");
            flag = 1;
        }
        if(num[10] != 0 || num[11] != 0)
        {
            if(num[11] != 0)
                printf(" %d%d hajar",num[11],num[10]);
            else if(num[10] != 0)
                printf(" %d hajar",num[10]);
            else
                printf(" hajar");
            flag = 1;
        }
        if(num[9] != 0 || num[10] != 0)
        {
            printf(" %d shata",num[9]);
            flag = 1;
        }

        if(num[7] != 0 || num[8] != 0 || flag == 1)
        {
            if(num[8] != 0)
                printf(" %d%d kuti",num[8],num[7]);
            else if(num[7] != 0)
                printf(" %d kuti",num[7]);
            else
                printf(" kuti");
            flag = 1;
        }
        if(num[5] != 0 || num[6] != 0)
        {
            if(num[6] != 0)
                printf(" %d%d lakh",num[6],num[5]);
            else if(num[5] != 0)
                printf(" %d kuti",num[5]);
            else
                printf(" kuti");
            flag = 1;
        }
        if(num[3] != 0 || num[4] != 0)
        {
            if(num[4] != 0)
                printf(" %d%d hajar",num[4],num[3]);
            else if(num[3] != 0)
                printf(" %d hajar",num[3]);
            else
                printf(" hajar");
            flag = 1;
        }
        if(num[2] != 0 )
        {
            printf(" %d shata",num[2]);
            flag = 1;
        }

        if(num[0] != 0 || num[1] != 0)
        {
            if(num[1] != 0)
                printf(" %d%d",num[1],num[0]);
            else if(num[0] != 0)
                printf(" %d",num[0]);
            else
                printf(" 0");
        }
        if(flag == 0)
            printf(" 0");
        printf("\n");

        memset(num, '\0', 15);
    }
    return 0;
}
