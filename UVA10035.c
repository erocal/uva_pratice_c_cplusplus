#include<stdio.h>
int main()
{
    int n1,n2,i=0,flag,ans;
    scanf("%d%d",&n1,&n2);

    while(n1 != 0 && n2 != 0)
    {
        int num[11]={'\0'},num1[11]={'\0'};
        ans = 0;
        i = 0;
        while(n1>0)
        {
            num[i] = n1%10;
            n1 /= 10;
            i++;
        }
        flag = i;
        i = 0;
        while(n2>0)
        {
            num1[i] = n2%10;
            n2 /= 10;
            i++;
        }
        if(i > flag)
        {
            flag = i;
        }
        for(i = 0; i < flag+1; i++)
        {
            if((num[i] + num1[i]) >= 10)
            {
                ans++;
                num[i+1] += ((num[i]+num1[i]) / 10);
            }
        }

        if(ans > 1)
            printf("%d carry operations.\n",ans);
        else if(ans == 1)
            printf("1 carry operation.\n");
        else
            printf("No carry operation.\n");
        scanf("%d%d",&n1,&n2);
    }
    return 0;
}
