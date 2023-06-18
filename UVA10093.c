#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,num,ans,flag;
    char str[100] = {'\0'};
    while(gets(str)!=NULL)
    {
        ans = 0;
        num = 0;
        flag = 0;
        for(i = 0;i < strlen(str);i++)
        {
            if(isdigit(str[i]))
                flag = (str[i] - '0');
            else if(isupper(str[i]))
                flag = (str[i] - 'A' + 10);
            else if(islower(str[i]))
                flag = (str[i] - 'a' + 36);

            ans += flag;
            if(num < flag)
                num = flag;
        }
        for(;num < 62;num++)
        {
            if(num == 0)
            {
                printf("2\n");
                break;
            }
            else if(ans % num == 0)
            {
                printf("%d\n",num+1);
                break;
            }
        }
        if(num == 62)
            printf("such number is impossible!\n");

        memset(str,'\0',100);
    }

    return 0;
}
