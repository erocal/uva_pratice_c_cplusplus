#include<stdio.h>
#include<string.h>

/*int strtosum(int a,int b)
{
    while(b > 0)
    {
        a += (b % 10);
        b /= 10;
    }
    return a;
}*/

int main()
{
    int num,flag,sum,ans,count;
    char str[100] = {0};
    gets(str);
    while(str[0] != '0')
    {
        printf("%s ",str);
        sum = 0;
        ans = 0;
        num = strlen(str);
        while(num--)
        {
            sum += (str[num] - '0');
        }
        if(sum % 9 != 0)
        {
            printf("is not a multiple of 9.\n");
        }
        else
        {
            if(sum == 9)
            {
                ans++;
            }
            else
            {
                while(sum % 9 == 0 && sum > 0)
                {
                    ans++;
                    count = 0;
                    while(sum > 0)
                    {
                        count += (sum % 10);
                        sum /= 10;
                    }
                    sum = count;

                    //printf("%d %d\n",sum,count);
                    if(count == 9)
                    {
                        ans++;
                        break;
                    }
                }
            }

            printf("is a multiple of 9 and has 9-degree %d.\n",ans);
        }
        gets(str);
    }
    return 0;
}
