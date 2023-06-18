#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    int person[101] = {0};
    int nowork[15000] = {0};
    scanf("%d",&num);
    while(num--)
    {
        int i,day = 0,people = 0,j = 0,x = 0,ans;
        ans = 0;
        memset(person,0,101);
        memset(nowork,0,15000);
        scanf("%d",&day);
        scanf("%d",&people);
        for(i = 0;i < people;i++)
        {
            scanf("%d",&person[i]);
            for(j = person[i];j <= day;j += person[i])
            {
                if(((j%7) != 6) && ((j%7) != 0))
                {
                    nowork[j] = 1;
                }
            }
        }
        for(i = 1;i <= day;i++)
        {
            if(nowork[i] == 1)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
