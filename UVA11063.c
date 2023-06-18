#include<stdio.h>
#include<string.h>
int main()
{
    int num,i,count = 0,j,countone,flag;
    int str[100];
    int strone[1000];
    while(scanf("%d",&num)!=EOF)
    {
        count++;
        countone = 0;
        flag = 0;
        memset(str,'\0',100);
        memset(strone,'\0',1000);
        i = 0;
        for(i = 0;i < num;i++)
        {
            scanf("%d",&str[i]);
        }
        for(i = 0;i < num;i++)
        {
            for(j = i;j < num;j++)
            {
                strone[countone] = str[i]+str[j];
                countone++;
            }
        }
        for(i = 0;i < countone;i++)
        {
            for(j = i+1;j < countone;j++)
            {
                if(strone[i] == strone[j])
                {
                    printf("Case #%d: It is not a B2-Sequence.\n",count);
                    printf("\n");
                    i = countone;
                    j = countone;
                    flag = 1;
                }
            }
        }
        if(flag == 0)
        {
            printf("Case #%d: It is a B2-Sequence.\n",count);
            printf("\n");
        }
    }
    return 0;
}
