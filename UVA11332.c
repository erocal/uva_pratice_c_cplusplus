#include<stdio.h>
int main()
{
    int i,num = 1,ans;
    scanf("%d",&num);
    while(num != 0)
    {
        ans = num;
        while(num > 9)
        {
            ans = 0;
            while(num > 0)
            {
                ans+=(num%10);
                num/=10;
            }
            num = ans;
        }
        printf("%d\n",ans);
        scanf("%d",&num);
    }
    return 0;
}
