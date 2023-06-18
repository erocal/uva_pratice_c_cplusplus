#include<stdio.h>
#include<string.h>
#include<math.h>

long long int GCD(long long int a,long long int b)
{
    if(b == 0)
        return a;
    else
        GCD(b,a%b);
}

int main()
{
    long long int num,i,num1,num2,count = 0;

    scanf("%lld",&num);
    while(num--)
    {
        count++;
        num1 = 0;
        num2 = 0;
        char str1[310] = {0};
        char str2[310] = {0};
        scanf("%s%s", str1, str2);
        for(i = 0;i < strlen(str1);i++)
        {
            if(str1[i] == '1')
                num1 += pow(2,(strlen(str1)-i-1));
        }
        for(i = 0;i < strlen(str2);i++)
        {
            if(str2[i] == '1')
                num2 += pow(2,(strlen(str2)-i-1));
        }
        if(GCD(num1,num2) != 1)
            printf("Pair #%lld: All you need is love!\n",count);
        else
            printf("Pair #%lld: Love is not all you need!\n",count);
    }
    return 0;
}
