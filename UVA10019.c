#include<stdio.h>
#include<string.h>

int main()
{
    int two[15] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384};
    int num,i,ans,flag,test,sw;
    scanf("%d",&num);
    while(num--)
    {
        flag = 0;
        scanf("%d",&test);
        sw = test;
        for(i = 14;i > -1;i--)
        {
            if(0 > sw)
                break;
            else if(sw >= two[i])
            {
                flag++;
                sw -= two[i];
            }
        }
        printf("%d ",flag);
        sw = test;
        flag = 0;
        while(sw > 0)
        {
            ans = sw % 10;
            if(ans == 1 || ans == 2 || ans == 4 || ans == 8)
                flag ++;
            else if(ans == 7)
                flag += 3;
            else if(ans == 0)
                flag = flag;
            else
                flag += 2;

            sw /= 10;
        }
        printf("%d\n",flag);
    }
    return 0;
}
