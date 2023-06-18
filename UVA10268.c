#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,x,j,num;
    char str[1000] = {'\0'};
    long long int ans;

    while(scanf("%d",&x)!=EOF)
    {
        scanf("\n");
        ans = 0;
        num = 0;
        memset(str,'\0',1000);
        gets(str);
        for(i = 0;i < strlen(str);i++)
        {
            if(str[i] < 58 && str[i] > 47)
                num++;
        }
        for(i = 0;i < strlen(str);i++)
        {
            if(str[i] < 58 && str[i] > 47)
            {
                if(i != 0)
                {
                    if(str[i-1] == 45 && num > 1)
                    {
                        ans += (num-1)*((0-(str[i]-48))*pow(x,(num-2)));
                    }
                    else if(num == 1)
                    {
                        break;
                    }
                    else
                    {
                        ans += (num-1)*(str[i]-48)*pow(x,(num-2));
                    }
                    num--;
                }
                else if(i == 0)
                {
                    if(num > 1)
                    {
                        ans += (num-1)*(str[i]-48)*pow(x,(num-2));
                    }
                    else
                    {
                        break;
                    }
                    num--;
                }
            }
            if(num < 2)
                break;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
