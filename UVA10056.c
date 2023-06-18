#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,num1,num3,num5 = 10000;
    double num2,num4,ans,flag,flag1;
    scanf("%d",&num);
    for(i = 0;i < num;i++)
    {
        scanf("%d%lf%d",&num1,&num2,&num3);
        num4 = 1-num2;
        flag = num2*(pow(num4,(num3-1)));
        flag1 = pow(num4,num1);
        ans = flag * (1-(pow(flag1,num5)));
        if(num2 != 0)
            printf("%.4lf\n",flag/(1-pow(num4,num1)));
            //printf("%.4lf\n",ans/(1-pow(num4,num1)));
        else
            printf("0.0000\n");



    }
    return 0;
}
