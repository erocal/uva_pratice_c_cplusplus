#include<stdio.h>
int main()
{
    int num,num1,i,ans,num2,flag,sw;
    while(scanf("%d%d",&num,&num1)!=EOF)
    {
        ans = 0;
        printf("%d %d ",num,num1);
        if(num1 < num)
        {
            sw = num1;
            num1 = num;
            num = sw;
        }
        while(num <= num1)
        {
            flag = 0;
            num2 = num;
            while(num2 != 1)
            {
                if(num2 % 2 == 0)
                    num2 /= 2;
                else
                    num2 = (num2*3+1);
                flag++;
            }
            flag++;
            if(flag > ans)
                ans = flag;
            num++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
