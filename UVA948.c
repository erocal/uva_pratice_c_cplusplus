#include<stdio.h>
#include<string.h>
int main()
{
    int num,i,test,flag;
    int ans;
    int use[100] = {'\0'};
    use[0] = 0;
    use[1] = 1;
    for(i = 2;i < 45;i++)
    {
        use[i] = use[i-1] + use[i-2];
    }
    scanf("%d",&num);
    while(num--)
    {
        flag = 0;
        ans = 0;
        scanf("%d",&test);
        printf("%d = ",test);
        for(i = 44;i > 1;i--)
        {
            if(use[i] <= test)
            {
                flag = 1;
                test -= use[i];
                printf("1");
            }
            else if(flag == 1)
            {
                printf("0");
            }
        }
        printf(" (fib)\n");

    }

    return 0;
}
