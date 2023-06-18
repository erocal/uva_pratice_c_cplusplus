#include<stdio.h>
int main()
{
    int a = 1,b = 1,num,ans;
    scanf("%d%d",&a,&b);
    while(a != 0 || b != 0)
    {
        ans = 0;
        num = 1;
        while((num*num) <= b)
        {
            if((num*num) >= a)
                ans++;
            num++;
        }
        printf("%d\n",ans);
        scanf("%d%d",&a,&b);
    }
    return 0;
}
