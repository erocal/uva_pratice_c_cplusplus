#include<stdio.h>
int main()
{
    int num1,num2,i,j,x,z1,z2,sw,nenum2,num3,num4,num5,num6;
    scanf("%d%d",&num1,&num2);
    nenum2 = 0 - num2;
    int num[10000]={'\0'};
    int ans[10000]={'\0'};
    for(i=0;i < num1;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d%d",&z1,&z2);
    printf("%d %d\n",num1,num2);
    for(i=0;i < num1;i++)
    {
        for(j=i+1;j < num1;j++)
        {
            if(num[i]%num2 > num[j]%num2)
            {
                sw = num[i];
                num[i] = num[j];
                num[j] = sw;
            }
        }
    }
    num3 = 0; // �p���e�l�Ƽƶq
    num4 = 0; // �Ϥ���e�_���P�p��ƶq
    num5 = 0; // �_�ƥ���
    num6 = 0; // �����l�Ƽƶq
    for(j = nenum2+1 ; j < num2 ; j++)
    {

        for(i=0;i < num1;i++)
        {
            if(num[i]%num2 == j)
            {
                num3++;
            }
        }

        for(i = num6; i < num3; i++)
        {
            if(num[i] % 2 != 0)
            {
                ans[num4] = num[i];
                num4++;
            }
        }


        for(i = num6;i < num4;i++)
        {
            for(x=i+1;x < num4;x++)
            {
                if(ans[i] < ans[x])
                {
                    sw = ans[i];
                    ans[i] = ans[x];
                    ans[x] = sw;
                }
            }
        }
        num5 = num4;
        for(i = num6; i < num3; i++)
        {
            if(num[i] % 2 == 0)
            {
                ans[num4] = num[i];
                num4++;
            }
        }
        for(i=num5;i < num4;i++)
        {
            for(x=i+1;x < num4;x++)
            {
                if(ans[i] > ans[x])
                {
                    sw = ans[i];
                    ans[i] = ans[x];
                    ans[x] = sw;
                }
            }
        }
        num6 = num3;
    }


    for(i=0;i < num1;i++)
    {
        printf("%d\n",ans[i]);
    }
    printf("0 0\n");
    return 0;
}
