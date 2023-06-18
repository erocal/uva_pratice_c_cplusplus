#include<stdio.h>
#include<string.h>
int main()
{
    int i,times,j,count = 0,flag;
    int num[100][100] = {'\0'};
    scanf("%d",&times);
    while(times--)
    {
        int r = 0;
        char str[10000];
        i = 0;
        j = 0;
        flag = 0;
        memset(num,'\0',sizeof(num));
        scanf("%s",str);
        scanf("%s",str);
        scanf("%d",&r);
        count++;
        for(i = 0;i < r;i++)
        {
            for(j = 0;j < r;j++)
            {
                scanf("%d",&num[i][j]);
            }
        }

        for(i = 0;i < r;i++)
        {
            for(j = 0;j < r;j++)
            {
                if(num[i][j] != num[r-i-1][r-j-1] || num[i][j] < 0)
                {
                    i = r;
                    j = r;
                    flag = 1;
                    printf("Test #%d: Non-symmetric.\n",count);
                }
            }
        }
        if(flag == 0)
        {
            printf("Test #%d: Symmetric.\n",count);
        }
    }


    return 0;
}
