#include<stdio.h>
int main()
{
    int num,i,ans,count,frians,frinum;
    while(scanf("%d",&num)!=EOF)
    {
        ans = num;
        count = num / 3;
        frinum = num + 1;
        frians = num;
        while(count > 0)
        {
            count = num / 3;
            num = num%3;
            num += count;
            ans += count;
        }
        count = frinum / 3;
        while(count > 0)
        {
            count = frinum / 3;
            frinum = frinum%3;
            frinum += count;
            frians += count;
        }
        if(ans > frians)
            printf("%d\n",ans);
        else
            printf("%d\n",frians);
    }
    return 0;
}


