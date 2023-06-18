#include<stdio.h>
int main()
{
    int fir,sec,num,i,j,ans;
    scanf("%d",&num);
    for(i = 0;i < num; i++)
    {
        ans = 0;
        scanf("%d%d",&fir,&sec);
        printf("Case %d: ",i+1);
        for(j = fir;j < (sec+1);j++)
        {
            if(j % 2 == 1)
                ans += j;
        }
        printf("%d\n",ans);
    }
    return 0;
}
