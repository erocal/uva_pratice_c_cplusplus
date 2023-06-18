#include<stdio.h>
int GCD(int a,int b)
{
    if(b == 0)
        return a;
    else
        GCD(b,a%b);
}
int main()
{
    int num,ans,i,j;
    scanf("%d",&num);
    while(num != 0)
    {
        int G=0;
        for(i=1;i<num;i++)
        {
            for(j=i+1;j<=num;j++)
            {
                  G+=GCD(i,j);
            }
        }
        printf("%d\n",G);
        scanf("%d",&num);
    }
    return 0;
}
