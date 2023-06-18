#include<stdio.h>
#include<string.h>
int main()
{
    int num,i,j,fnaen = 0,flag;
    int ans[26] = {'\0'};
    char str[100][100] = {'\0'};
    scanf("%d",&num);
    scanf("\n");
    for(i = 0;i < num;i++)
    {
        gets(str[i]);
        //printf("%d",str[i][4]);
        for(j = 0; j < strlen(str[i]);j++)
        {
            if(str[i][j] == 32)
                flag = 0;
            else
            {
                if(str[i][j] > 90)
                {
                    ans[(str[i][j]-97)]++;
                    //printf("%d %d\n",str[i][j]-97,ans[(str[i][j]-97)]);
                }
                else
                {
                    ans[(str[i][j]-65)]++;
                }
            }
        }
    }
    //printf("%d\n",ans[0]);
    while(i != 40)
    {
        fnaen = ans[0];
        flag = 0;
        for(j = 0;j < 26;j++)
        {
            if(fnaen < ans[j])
            {
                fnaen = ans[j];
                flag = j;
            }
        }
        if(fnaen == 0)
            break;
        else
        {
            printf("%c %d\n",flag+65,fnaen);
            ans[flag] = 0;
        }
        i++;
    }

    return 0;
}
